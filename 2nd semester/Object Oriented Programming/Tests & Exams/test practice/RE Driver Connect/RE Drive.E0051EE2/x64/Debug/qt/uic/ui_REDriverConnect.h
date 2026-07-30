/********************************************************************************
** Form generated from reading UI file 'REDriverConnect.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDRIVERCONNECT_H
#define UI_REDRIVERCONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REDriverConnectClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLabel *latLabel;
    QLabel *longLabel;
    QLabel *scoreLabel;
    QLabel *statusLabel;
    QLineEdit *descInput;
    QLineEdit *latInput;
    QLineEdit *lonInput;
    QPushButton *addBtn;
    QPushButton *validateBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REDriverConnectClass)
    {
        if (REDriverConnectClass->objectName().isEmpty())
            REDriverConnectClass->setObjectName("REDriverConnectClass");
        REDriverConnectClass->resize(600, 400);
        centralWidget = new QWidget(REDriverConnectClass);
        centralWidget->setObjectName("centralWidget");
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 60, 256, 192));
        latLabel = new QLabel(centralWidget);
        latLabel->setObjectName("latLabel");
        latLabel->setGeometry(QRect(10, 20, 49, 16));
        longLabel = new QLabel(centralWidget);
        longLabel->setObjectName("longLabel");
        longLabel->setGeometry(QRect(10, 40, 49, 16));
        scoreLabel = new QLabel(centralWidget);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(20, 270, 49, 16));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(20, 290, 49, 16));
        descInput = new QLineEdit(centralWidget);
        descInput->setObjectName("descInput");
        descInput->setGeometry(QRect(300, 80, 113, 24));
        latInput = new QLineEdit(centralWidget);
        latInput->setObjectName("latInput");
        latInput->setGeometry(QRect(300, 110, 113, 24));
        lonInput = new QLineEdit(centralWidget);
        lonInput->setObjectName("lonInput");
        lonInput->setGeometry(QRect(420, 110, 113, 24));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(430, 80, 80, 24));
        validateBtn = new QPushButton(centralWidget);
        validateBtn->setObjectName("validateBtn");
        validateBtn->setGeometry(QRect(380, 160, 80, 24));
        REDriverConnectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(REDriverConnectClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        REDriverConnectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REDriverConnectClass);
        mainToolBar->setObjectName("mainToolBar");
        REDriverConnectClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(REDriverConnectClass);
        statusBar->setObjectName("statusBar");
        REDriverConnectClass->setStatusBar(statusBar);

        retranslateUi(REDriverConnectClass);

        QMetaObject::connectSlotsByName(REDriverConnectClass);
    } // setupUi

    void retranslateUi(QMainWindow *REDriverConnectClass)
    {
        REDriverConnectClass->setWindowTitle(QCoreApplication::translate("REDriverConnectClass", "REDriverConnect", nullptr));
        latLabel->setText(QCoreApplication::translate("REDriverConnectClass", "TextLabel", nullptr));
        longLabel->setText(QCoreApplication::translate("REDriverConnectClass", "TextLabel", nullptr));
        scoreLabel->setText(QCoreApplication::translate("REDriverConnectClass", "TextLabel", nullptr));
        statusLabel->setText(QCoreApplication::translate("REDriverConnectClass", "TextLabel", nullptr));
        descInput->setPlaceholderText(QCoreApplication::translate("REDriverConnectClass", "desc", nullptr));
        latInput->setPlaceholderText(QCoreApplication::translate("REDriverConnectClass", "latitude", nullptr));
        lonInput->setPlaceholderText(QCoreApplication::translate("REDriverConnectClass", "longitude", nullptr));
        addBtn->setText(QCoreApplication::translate("REDriverConnectClass", "ADD", nullptr));
        validateBtn->setText(QCoreApplication::translate("REDriverConnectClass", "VALIDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REDriverConnectClass: public Ui_REDriverConnectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDRIVERCONNECT_H
