#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QErrorMessage>
#include <QString>
#include <QHostInfo>
#include <QByteArray>
#include <QProcess>
#include <QList>

namespace Ui {
class ServeurWidget;
}

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

private slots:
    void onQTcpServer_newConnection();
    void onQTcpSocket_ReadyRead();
    void onQProcess_readyReadStandartOutput();
    void onQTcpSocket_disconnected();
    void on_pushButtonLancerServeur_clicked();

private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur;
    QList<QTcpSocket *> socketDialogueClient;
    QList<QProcess *> process;

};

#endif // SERVEURWIDGET_H
