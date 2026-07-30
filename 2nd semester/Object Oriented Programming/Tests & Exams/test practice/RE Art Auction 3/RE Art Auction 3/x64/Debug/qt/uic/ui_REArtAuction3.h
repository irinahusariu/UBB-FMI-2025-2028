/********************************************************************************
** Form generated from reading UI file 'REArtAuction3.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REARTAUCTION3_H
#define UI_REARTAUCTION3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REArtAuction3Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REArtAuction3Class)
    {
        if (REArtAuction3Class->objectName().isEmpty())
            REArtAuction3Class->setObjectName("REArtAuction3Class");
        REArtAuction3Class->resize(600, 400);
        menuBar = new QMenuBar(REArtAuction3Class);
        menuBar->setObjectName("menuBar");
        REArtAuction3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REArtAuction3Class);
        mainToolBar->setObjectName("mainToolBar");
        REArtAuction3Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(REArtAuction3Class);
        centralWidget->setObjectName("centralWidget");
        REArtAuction3Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(REArtAuction3Class);
        statusBar->setObjectName("statusBar");
        REArtAuction3Class->setStatusBar(statusBar);

        retranslateUi(REArtAuction3Class);

        QMetaObject::connectSlotsByName(REArtAuction3Class);
    } // setupUi

    void retranslateUi(QMainWindow *REArtAuction3Class)
    {
        REArtAuction3Class->setWindowTitle(QCoreApplication::translate("REArtAuction3Class", "REArtAuction3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REArtAuction3Class: public Ui_REArtAuction3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REARTAUCTION3_H
