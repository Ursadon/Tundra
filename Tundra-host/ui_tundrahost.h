/********************************************************************************
** Form generated from reading UI file 'tundrahost.ui'
**
** Created: Thu 17. Nov 12:26:51 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUNDRAHOST_H
#define UI_TUNDRAHOST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TundraHost
{
public:
    QWidget *centralWidget;
    QPushButton *pbStatus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TundraHost)
    {
        if (TundraHost->objectName().isEmpty())
            TundraHost->setObjectName(QString::fromUtf8("TundraHost"));
        TundraHost->resize(400, 300);
        centralWidget = new QWidget(TundraHost);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pbStatus = new QPushButton(centralWidget);
        pbStatus->setObjectName(QString::fromUtf8("pbStatus"));
        pbStatus->setGeometry(QRect(300, 210, 75, 23));
        TundraHost->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TundraHost);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        TundraHost->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TundraHost);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TundraHost->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TundraHost);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TundraHost->setStatusBar(statusBar);

        retranslateUi(TundraHost);

        QMetaObject::connectSlotsByName(TundraHost);
    } // setupUi

    void retranslateUi(QMainWindow *TundraHost)
    {
        TundraHost->setWindowTitle(QApplication::translate("TundraHost", "TundraHost", 0, QApplication::UnicodeUTF8));
        pbStatus->setText(QApplication::translate("TundraHost", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TundraHost: public Ui_TundraHost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUNDRAHOST_H
