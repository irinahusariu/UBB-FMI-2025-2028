/********************************************************************************
** Form generated from reading UI file 'T3Bills.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T3BILLS_H
#define UI_T3BILLS_H

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

class Ui_T3BillsClass
{
public:
    QWidget *centralWidget;
    QListWidget *billList;
    QLineEdit *statusOption;
    QLineEdit *choseCompany;
    QPushButton *totalBtn;
    QLineEdit *displayTotal;
    QPushButton *showBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *T3BillsClass)
    {
        if (T3BillsClass->objectName().isEmpty())
            T3BillsClass->setObjectName("T3BillsClass");
        T3BillsClass->resize(600, 400);
        centralWidget = new QWidget(T3BillsClass);
        centralWidget->setObjectName("centralWidget");
        billList = new QListWidget(centralWidget);
        billList->setObjectName("billList");
        billList->setGeometry(QRect(20, 40, 256, 192));
        statusOption = new QLineEdit(centralWidget);
        statusOption->setObjectName("statusOption");
        statusOption->setGeometry(QRect(20, 250, 113, 24));
        choseCompany = new QLineEdit(centralWidget);
        choseCompany->setObjectName("choseCompany");
        choseCompany->setGeometry(QRect(290, 40, 201, 24));
        totalBtn = new QPushButton(centralWidget);
        totalBtn->setObjectName("totalBtn");
        totalBtn->setGeometry(QRect(490, 40, 91, 24));
        displayTotal = new QLineEdit(centralWidget);
        displayTotal->setObjectName("displayTotal");
        displayTotal->setGeometry(QRect(470, 80, 113, 24));
        showBtn = new QPushButton(centralWidget);
        showBtn->setObjectName("showBtn");
        showBtn->setGeometry(QRect(140, 250, 80, 24));
        T3BillsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(T3BillsClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        T3BillsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(T3BillsClass);
        mainToolBar->setObjectName("mainToolBar");
        T3BillsClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(T3BillsClass);
        statusBar->setObjectName("statusBar");
        T3BillsClass->setStatusBar(statusBar);

        retranslateUi(T3BillsClass);

        QMetaObject::connectSlotsByName(T3BillsClass);
    } // setupUi

    void retranslateUi(QMainWindow *T3BillsClass)
    {
        T3BillsClass->setWindowTitle(QCoreApplication::translate("T3BillsClass", "T3Bills", nullptr));
        statusOption->setPlaceholderText(QCoreApplication::translate("T3BillsClass", "paid/unpaid", nullptr));
        choseCompany->setPlaceholderText(QCoreApplication::translate("T3BillsClass", "Enter company name:", nullptr));
        totalBtn->setText(QCoreApplication::translate("T3BillsClass", "Compute Total", nullptr));
        displayTotal->setPlaceholderText(QCoreApplication::translate("T3BillsClass", "Total: ", nullptr));
        showBtn->setText(QCoreApplication::translate("T3BillsClass", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class T3BillsClass: public Ui_T3BillsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T3BILLS_H
