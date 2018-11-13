#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);

    socketEcouteServeur = new QTcpServer(this);   
    socketDialogueClient = new QTcpSocket(this);
    process = new QProcess(this);

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
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient, &QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_ReadyRead);
    connect(process, &QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandartOutput);
}

void ServeurWidget::onQTcpSocket_ReadyRead()
{
    QByteArray demande;
    QString reponse;
    QTextStream texte;
    demande = socketDialogueClient->readAll();
    ui->textEditLog->append(demande);
    if(!strcmp(demande,"u"))
    {
        reponse = getenv("USERNAME");
    }

    if(!strcmp(demande,"c"))
    {
        reponse = QHostInfo::localHostName();
    }

    if(!strcmp(demande,"a"))
    {
        process -> start("uname");
    }

    if(!strcmp(demande,"o"))
    {
        process -> start("uname", QStringList("-p"));

    }
    socketDialogueClient->write(reponse.toLatin1());
}

void ServeurWidget::onQProcess_readyReadStandartOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Réponse envoyé à " + socketDialogueClient->peerAddress().toString()+ " : " + reponse;
        ui->textEditLog->append(message);
        socketDialogueClient->write(reponse.toLatin1());
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{

}
