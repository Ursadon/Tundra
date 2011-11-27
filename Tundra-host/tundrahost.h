#ifndef TUNDRAHOST_H
#define TUNDRAHOST_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QMenu>
#include <QtGui>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

namespace Ui {
    class TundraHost;
}

class TundraHost : public QMainWindow
{
    Q_OBJECT

public:
    explicit TundraHost(QWidget *parent = 0);
    ~TundraHost();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void on_pbStatus_clicked();
    void trayIconClicked(QSystemTrayIcon::ActivationReason);
    void acceptConnection();
    void startRead();

private:
    Ui::TundraHost *ui;
    QSystemTrayIcon *trayIcon;
    QMenu *trayMenu;
    QTcpServer tcpServer;
    QTcpSocket* client;
};

#endif // TUNDRAHOST_H
