#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);

    socketEcouteServeur = new QTcpServer(this);


    connect(socketEcouteServeur, &QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::on_pushButtonLancerServeur_clicked()
{
    if(!socketEcouteServeur->listen(QHostAddress::Any, ui->spinBoxPort->value()))
    {
        qDebug() << "Le serveur ne peut pas se lancer";
        ui->textEditLog->append("Le serveur ne peut pas se lancer");
    }
    else
    {
        qDebug() << "Le serveur est lancé";
        ui->textEditLog->append("Serveur Lancé");
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{
    QTcpSocket *client;
    client = socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_ReadyRead);
    connect(client,&QTcpSocket::disconnected,this,&ServeurWidget::onQTcpSocket_disconnected);
    socketDialogueClient.append(client);

    QProcess *processus = new QProcess;
    connect(processus,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandartOutput);
    process.append(processus);
}

void ServeurWidget::onQTcpSocket_ReadyRead()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());

    QByteArray demande;
    QString reponse;
    QTextStream texte;
    int indexProcess = socketDialogueClient.indexOf(client);
    demande = socketDialogueClient.at(indexProcess)->readAll();
    ui->textEditLog->append("Hote n°:");
    ui->textEditLog->append(QString::number(indexProcess));
    ui->textEditLog->append("Demande:");
    ui->textEditLog->append(demande);

    if(!strcmp(demande,"u"))
    {
        reponse = getenv("USERNAME");
        socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
    }

    if(!strcmp(demande,"c"))
    {
        reponse = QHostInfo::localHostName();
        socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
    }

    if(!strcmp(demande,"o"))
    {
     process.at(indexProcess)->start("uname");
    }

    if(!strcmp(demande,"a"))
    {
     process.at(indexProcess)->start("uname", QStringList("-p"));
    }

}

void ServeurWidget::onQProcess_readyReadStandartOutput()
{
    QProcess *processus=qobject_cast<QProcess*>(sender());
        int indexProcess=process.indexOf(processus);
        QString reponse = process.at(indexProcess)->readAllStandardOutput();
        if(!reponse.isEmpty())
        {
            QString message = "Réponse envoyée à " + socketDialogueClient.at(indexProcess)->peerAddress().toString()+ " : " + reponse;
            ui->textEditLog->append(message);
            socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
        }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);

    ui->textEditLog->append("Deconnexion du client : " + client->peerAddress().toString());

    process.removeAt(indexProcess);
    socketDialogueClient.removeOne(socketDialogueClient.at(indexProcess));
}
