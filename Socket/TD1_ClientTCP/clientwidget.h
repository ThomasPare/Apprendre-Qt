#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QErrorMessage>

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:

    void on_pushButtonConnexion_clicked();
    void on_pushButtonNomOrdinateur_clicked();
    void on_pushButtonNomUtilisateur_clicked();
    void on_pushButtonProcesseur_clicked();
    void on_pushButtonOS_clicked();
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_hostFound();
    void onQTcpSocket_stateChanged(QAbstractSocket::SocketError socketState);
    void onQTcpSocket_aboutToClose();
    void onQTcpSocket_bytesWritten(qint64 bytes);
    void onQTcpSocket_readChannelFinished();
    void onQTcpSocket_readyRead();

private:
    Ui::ClientWidget *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    QString typeDeDemande;
};

#endif // CLIENTWIDGET_H
