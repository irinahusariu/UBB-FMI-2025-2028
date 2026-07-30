/********************************************************************************
** Form generated from reading UI file 'PresenterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESENTERWINDOW_H
#define UI_PRESENTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PresenterWindowClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLineEdit *idInput;
    QLineEdit *txtInput;
    QLineEdit *ansInput;
    QLineEdit *scoreInput;
    QPushButton *addBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PresenterWindowClass)
    {
        if (PresenterWindowClass->objectName().isEmpty())
            PresenterWindowClass->setObjectName("PresenterWindowClass");
        PresenterWindowClass->resize(600, 400);
        centralWidget = new QWidget(PresenterWindowClass);
        centralWidget->setObjectName("centralWidget");
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 50, 256, 192));
        idInput = new QLineEdit(centralWidget);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(300, 50, 113, 24));
        txtInput = new QLineEdit(centralWidget);
        txtInput->setObjectName("txtInput");
        txtInput->setGeometry(QRect(300, 80, 291, 24));
        ansInput = new QLineEdit(centralWidget);
        ansInput->setObjectName("ansInput");
        ansInput->setGeometry(QRect(300, 110, 291, 24));
        scoreInput = new QLineEdit(centralWidget);
        scoreInput->setObjectName("scoreInput");
        scoreInput->setGeometry(QRect(300, 140, 113, 24));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(300, 180, 80, 24));
        PresenterWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PresenterWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        PresenterWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PresenterWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        PresenterWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PresenterWindowClass);
        statusBar->setObjectName("statusBar");
        PresenterWindowClass->setStatusBar(statusBar);

        retranslateUi(PresenterWindowClass);

        QMetaObject::connectSlotsByName(PresenterWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *PresenterWindowClass)
    {
        PresenterWindowClass->setWindowTitle(QCoreApplication::translate("PresenterWindowClass", "PresenterWindow", nullptr));
        idInput->setPlaceholderText(QCoreApplication::translate("PresenterWindowClass", "id", nullptr));
        txtInput->setPlaceholderText(QCoreApplication::translate("PresenterWindowClass", "text", nullptr));
        ansInput->setPlaceholderText(QCoreApplication::translate("PresenterWindowClass", "answer", nullptr));
        scoreInput->setPlaceholderText(QCoreApplication::translate("PresenterWindowClass", "score", nullptr));
        addBtn->setText(QCoreApplication::translate("PresenterWindowClass", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PresenterWindowClass: public Ui_PresenterWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESENTERWINDOW_H
