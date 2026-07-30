/********************************************************************************
** Form generated from reading UI file 'Seminar7Chats.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEMINAR7CHATS_H
#define UI_SEMINAR7CHATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seminar7ChatsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Seminar7ChatsClass)
    {
        if (Seminar7ChatsClass->objectName().isEmpty())
            Seminar7ChatsClass->setObjectName("Seminar7ChatsClass");
        Seminar7ChatsClass->resize(600, 400);
        menuBar = new QMenuBar(Seminar7ChatsClass);
        menuBar->setObjectName("menuBar");
        Seminar7ChatsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Seminar7ChatsClass);
        mainToolBar->setObjectName("mainToolBar");
        Seminar7ChatsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Seminar7ChatsClass);
        centralWidget->setObjectName("centralWidget");
        Seminar7ChatsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Seminar7ChatsClass);
        statusBar->setObjectName("statusBar");
        Seminar7ChatsClass->setStatusBar(statusBar);

        retranslateUi(Seminar7ChatsClass);

        QMetaObject::connectSlotsByName(Seminar7ChatsClass);
    } // setupUi

    void retranslateUi(QMainWindow *Seminar7ChatsClass)
    {
        Seminar7ChatsClass->setWindowTitle(QCoreApplication::translate("Seminar7ChatsClass", "Seminar7Chats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seminar7ChatsClass: public Ui_Seminar7ChatsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEMINAR7CHATS_H
