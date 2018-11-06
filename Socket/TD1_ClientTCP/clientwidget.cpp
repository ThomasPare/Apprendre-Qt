#include "clientwidget.h"
#include "ui_clientwidget.h"

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    socketDeDialogueAvecServeur=new QTcpSocket (this);

    connect( socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &ClientWidget::onQTcpSocket_connected);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this, &ClientWidget::onQTcpSocket_disconnected);
    connect( socketDeDialogueAvecServeur, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &ClientWidget::onQTcpSocket_error);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::hostFound, this, &ClientWidget::onQTcpSocket_hostFound);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::stateChanged,this, &ClientWidget::onQTcpSocket_aboutToClose);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::aboutToClose, this, &ClientWidget::onQTcpSocket_aboutToClose);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::bytesWritten, this, &ClientWidget::onQTcpSocket_bytesWritten);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::readChannelFinished, this, &ClientWidget::onQTcpSocket_readChannelFinished);
    connect( socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this, &ClientWidget::onQTcpSocket_readyRead);

    ui->groupBoxInfo->setEnabled(false);
}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_pushButtonConnexion_clicked()
{
    if (ui->pushButtonConnexion->text()!="Déconnexion"){
            // pour chaque nouvelle connexion on réinitialise la zone evenement
            ui->textEditEtat->clear();
            // connexion au serveur
            socketDeDialogueAvecServeur->connectToHost ( ui->lineEditIPServeur ->text(),ui->lineEditNumeroPort->text().toInt() );

        }
        else
        {
            socketDeDialogueAvecServeur->disconnectFromHost();

    }
}

void ClientWidget::on_pushButtonNomOrdinateur_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande="u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonProcesseur_clicked()
{
    typeDeDemande="a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOS_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::onQTcpSocket_connected()
{
    // changer le message du bouton de connexion en déconnexion
    ui->pushButtonConnexion->setText("Déconnexion");
    // rendre accessible zone des demandes
    ui->groupBoxInfo->setEnabled(true);
    //vider les zones de texte
    ui->lineEditNomMachine->clear();
    ui->lineEditNomUtilisateur->clear();
    ui->lineEditArchitecture->clear();
    ui->lineEditOS->clear();

    // désactiver les zones de saisie d'adresse ip et de numéro de port
    ui->lineEditIPServeur->setEnabled(false);
    ui->lineEditNumeroPort->setEnabled(false);
}

void ClientWidget::onQTcpSocket_disconnected()
{
    // changer le message du bouton de Déconnexion en Connexion
    ui->pushButtonConnexion->setText("Connexion");
    // fermeture de la socket
    socketDeDialogueAvecServeur->close();
    // rendre accessible les zone de saisie d'adresse ip et de numero de port
    ui->lineEditIPServeur->setEnabled(true);
    ui->lineEditNumeroPort->setEnabled(true);
    // desactiver zone des demandes
    //ui->groupBoxInfosPoste->setEnabled(false);
}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtat->append(socketDeDialogueAvecServeur->errorString());
}

void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEditEtat->append("E2 - Le serveur répond.");
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketError socketState)
{
    QString message;
        switch (socketState)
        {

        case QAbstractSocket::HostLookupState:
            message="Le client effectue une recherche de nom d'hôte.";
            break;
        case QAbstractSocket::ConnectingState:
            message="E1 - Le client demande l'établissement d'une connexion.";
            break;
        case QAbstractSocket::ConnectedState:
            message="E3 - Une connexion est établie avec le serveur.";
            break;

        // Fermeture 1 : quand le client n'a plus de données à envoyer dans le flux,
        // il envoie un segment dont l'indicateur FIN est défini.
        // toutefois des données peuvent toujours être en attente d'être reçues.
        case QAbstractSocket::ClosingState	:
            message="F1 - le client n'a plus de données à envoyer.";
            break;

        // Fermeture 2 : le serveur envoie un segment ACK
        // pour indiquer la bonne réception du segment FIN
        // afin de fermer la session du client au serveur.
        case QAbstractSocket::UnconnectedState :
            message="F2 - Le client n'est plus connecté.";
            break;

        case QAbstractSocket::ListeningState :
            message="For internal use only. ";
            break;
        }
    ui->textEditEtat->append(message);
}

void ClientWidget::onQTcpSocket_aboutToClose()
{

}

void ClientWidget::onQTcpSocket_bytesWritten(qint64 bytes)
{
    ui->textEditEtat->append("Requète envoyée : " + QString::number(bytes) + " octet(s)");
}

void ClientWidget::onQTcpSocket_readChannelFinished()
{
    ui->textEditEtat->append("F3 - le serveur met fin au dialogue.");
}

void ClientWidget::onQTcpSocket_readyRead()
{
   QByteArray buffer = socketDeDialogueAvecServeur->readAll();


        if( typeDeDemande =='u'){
            ui->lineEditNomUtilisateur->setText ( buffer.data() );
        }
        if( typeDeDemande == 'c'){
            ui->lineEditNomMachine->setText ( QString::fromUtf8(buffer.data() ));
        }
        if( typeDeDemande == 'a'){
            ui->lineEditArchitecture->setText ( QString::fromUtf8(buffer.data() ));
        }
        if( typeDeDemande == 'o'){
            ui->lineEditOS->setText ( QString::fromUtf8(buffer.data() ));
        }

}
