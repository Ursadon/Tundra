#include "tundrahost.h"
#include "ui_tundrahost.h"

TundraHost::TundraHost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TundraHost)
{
    ui->setupUi(this);

    trayMenu = new QMenu();
    trayIcon = new QSystemTrayIcon(this);

    trayMenu->addAction(new QAction("option 1", this)); // dummy action
    trayMenu->addAction(new QAction("option 2", this)); // dummy action

    QIcon icon(":/gfx/host.png");
    trayIcon->setContextMenu(trayMenu);
    trayIcon->setIcon(icon);
    trayIcon->show();

    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(trayIconClicked(QSystemTrayIcon::ActivationReason)));

    QTcpServer tcpServer;
    client = new QTcpSocket();
    connect(&tcpServer, SIGNAL(newConnection()),
        this, SLOT(acceptConnection()));

    tcpServer.listen(QHostAddress::Any, 8888);
}

TundraHost::~TundraHost()
{
    tcpServer.close();
    delete trayMenu;
    delete trayIcon;
    delete ui;
}

void TundraHost::startRead()
{
  char buffer[1024] = {0};
  client->read(buffer, client->bytesAvailable());
  qDebug(buffer);
  client->close();
}

void TundraHost::acceptConnection()
{
  client = tcpServer.nextPendingConnection();

  connect(client, SIGNAL(readyRead()),
    this, SLOT(startRead()));
}
void TundraHost::trayIconClicked(QSystemTrayIcon::ActivationReason reason) {
    switch (reason) {
    case QSystemTrayIcon::Trigger:
        break;
    case QSystemTrayIcon::DoubleClick:
        if (!this->isVisible()) {
            this->show();
            this->raise();
            this->setFocus();
        } else {
            this->hide();
        }
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    default:
        ;
    }
}

void TundraHost::closeEvent(QCloseEvent *events)
{
    events->ignore();
}

void TundraHost::on_pbStatus_clicked()
{

}
