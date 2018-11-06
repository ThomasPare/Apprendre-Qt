#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);

    socketClientBanque=new QTcpSocket (this);

    bool bon;
    bon = connect( socketClientBanque, &QTcpSocket::connected, this, &DAB_MainWindow::onQTcpSocket_connected);
    bon = connect( socketClientBanque, &QTcpSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected);
    bon = connect( socketClientBanque, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &DAB_MainWindow::onQTcpSocket_error);
    bon = connect( socketClientBanque, &QTcpSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead);

    if(!bon)
    {
        QMessageBox::information(this,"erreur","erreur de connexion");
    }

    ui->groupBoxOperations->setEnabled(false);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()== "Connexion")
        {
            socketClientBanque->connectToHost(ui->lineEditAdresse->text(),ui->lineEditPort->text().toInt());
        }
        else
        {
            socketClientBanque->disconnectFromHost();
    }
}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    quint16 taille=0;
    QBuffer tampon;
    QChar requete;
    float montant = ui->lineEditMontant->text().toFloat();

    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);

    if(ui->radioButtonSolde->isChecked())
    {
        requete = 'S';
        out<<taille<<requete<<montant;
        taille = tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }

    if(ui->radioButtonRetrait->isChecked())
    {

        requete='R';
        out<<taille<<requete<<montant;
        taille = tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }

    if(ui->radioButtonDepot->isChecked())
    {

        requete='D';
        out<<taille<<requete<<montant;
        taille = tampon.size()-sizeof(taille);
        tampon.seek(0);
        out<<taille;
        socketClientBanque->write(tampon.buffer());
    }

    ui->listWidgetEtat->addItem(requete);
}

void DAB_MainWindow::on_pushButtonNumeroDeCompte_clicked()
{
    quint16 taille= 0;
    QChar commande='N';
    int compte=ui->lineEditCompte->text().toInt();
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    // association du tampon au flux de sortie
    QDataStream out(&tampon);
    // construction de la trame
    out << taille << commande << compte;
    // calcul de la taille de la trame
    taille = tampon.size() - sizeof(taille);
    // placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);
    // modification de la trame avec la taille reel de la trame
    out << taille;
    // envoi du QByteArray du tampon via le socket
    if(compte > 0){
    socketClientBanque->write(tampon.buffer());
    }
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    // changer le message du bouton de connexion en déconnexion
    ui->pushButtonConnexion->setText("Déconnexion");
    // rendre accessible zone des demandes
    ui->groupBoxOperations->setEnabled(true);
    ui->radioButtonSolde->setChecked(true);

    // désactiver les zones de saisie d'adresse ip et de numéro de port
    ui->lineEditAdresse->setEnabled(false);
    ui->lineEditPort->setEnabled(false);
    ui->listWidgetEtat->addItem("Connecté");

    quint64 taille = 0;
    QString message;
    // si le nombre d'octets recu est au moins egal a celui de lataille de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)sizeof(taille))
    {
        //association de la socket au flux d'entree
        QDataStream in(socketClientBanque);
        // extraire la taille de ce que l'on doit recevoir
        in >> taille;
        //si le nombre d'octet recu est au moins egal a celui de ce que l'on doit recevoir
        if (socketClientBanque->bytesAvailable() >= (qint64)taille)
        {
            //extraire le message de la banque et le mettre dans message
            in>>message;
            ui->listWidgetEtat->addItem(message);
            qDebug()<< message;
        }
    }
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    // changer le message du bouton de Déconnexion en Connexion
    ui->pushButtonConnexion->setText("Connexion");
    // fermeture de la socket
    socketClientBanque->close();
    // rendre accessible les zone de saisie d'adresse ip et de numero de port
    ui->lineEditAdresse->setEnabled(true);
    ui->lineEditPort->setEnabled(true);
    // desactiver zone des demandes
    ui->groupBoxOperations->setEnabled(false);
    ui->listWidgetEtat->addItem("Déconnecté");
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    QErrorMessage *erreur = new QErrorMessage(this);

        QString message = "Oups une erreur !!! <br />" +
                socketClientBanque->errorString();
        erreur->showMessage(message);
        ui->textEditMessage->append("Distributeur indisponible !!");
    ui->groupBoxOperations->setEnabled(false);
}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille=0;
    QString message;

    // si le nombre d'octets recu est au moins egal a celui de lataille de ce que l'on doit recevoir
    if (socketClientBanque->bytesAvailable() >= (qint64)sizeof(taille))
    {
        //association de la socket au flux d'entree
        QDataStream in(socketClientBanque);
        // extraire la taille de ce que l'on doit recevoir
        in >> taille;
        //si le nombre d'octet recu est au moins egal a celui de ce que l'on doit recevoir
        if (socketClientBanque->bytesAvailable() >= (qint64)taille)
        {
            //extraire le message de la banque et le mettre dans message
            in>>message;
            ui->textEditMessage->clear();
            ui->textEditMessage->append(message);

            qDebug() << "message reçu : " << taille << " : " << message;
        }
    }
}
