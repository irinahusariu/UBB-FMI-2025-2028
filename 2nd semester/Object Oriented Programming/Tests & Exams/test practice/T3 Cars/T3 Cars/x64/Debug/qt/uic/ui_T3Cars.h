/********************************************************************************
** Form generated from reading UI file 'T3Cars.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T3CARS_H
#define UI_T3CARS_H

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

class Ui_T3CarsClass
{
public:
    QWidget *centralWidget;
    QListWidget *llistWidget;
    QLineEdit *manufacturerLE;
    QPushButton *showAllBtn;
    QPushButton *showManBtn;
    QLineEdit *inputLE;
    QLineEdit *nrCarsLE;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *T3CarsClass)
    {
        if (T3CarsClass->objectName().isEmpty())
            T3CarsClass->setObjectName("T3CarsClass");
        T3CarsClass->resize(600, 400);
        centralWidget = new QWidget(T3CarsClass);
        centralWidget->setObjectName("centralWidget");
        llistWidget = new QListWidget(centralWidget);
        llistWidget->setObjectName("llistWidget");
        llistWidget->setGeometry(QRect(30, 50, 256, 192));
        manufacturerLE = new QLineEdit(centralWidget);
        manufacturerLE->setObjectName("manufacturerLE");
        manufacturerLE->setGeometry(QRect(320, 50, 241, 191));
        showAllBtn = new QPushButton(centralWidget);
        showAllBtn->setObjectName("showAllBtn");
        showAllBtn->setGeometry(QRect(30, 260, 80, 24));
        showManBtn = new QPushButton(centralWidget);
        showManBtn->setObjectName("showManBtn");
        showManBtn->setGeometry(QRect(400, 290, 161, 24));
        inputLE = new QLineEdit(centralWidget);
        inputLE->setObjectName("inputLE");
        inputLE->setGeometry(QRect(320, 250, 221, 24));
        nrCarsLE = new QLineEdit(centralWidget);
        nrCarsLE->setObjectName("nrCarsLE");
        nrCarsLE->setGeometry(QRect(322, 290, 71, 24));
        T3CarsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(T3CarsClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        T3CarsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(T3CarsClass);
        mainToolBar->setObjectName("mainToolBar");
        T3CarsClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(T3CarsClass);
        statusBar->setObjectName("statusBar");
        T3CarsClass->setStatusBar(statusBar);

        retranslateUi(T3CarsClass);

        QMetaObject::connectSlotsByName(T3CarsClass);
    } // setupUi

    void retranslateUi(QMainWindow *T3CarsClass)
    {
        T3CarsClass->setWindowTitle(QCoreApplication::translate("T3CarsClass", "T3Cars", nullptr));
        manufacturerLE->setPlaceholderText(QCoreApplication::translate("T3CarsClass", "Cars by manufacturer:", nullptr));
        showAllBtn->setText(QCoreApplication::translate("T3CarsClass", "Show ALL", nullptr));
        showManBtn->setText(QCoreApplication::translate("T3CarsClass", "Show by MANUFACTURER", nullptr));
        inputLE->setPlaceholderText(QCoreApplication::translate("T3CarsClass", "Enter Manufacturer:", nullptr));
        nrCarsLE->setPlaceholderText(QCoreApplication::translate("T3CarsClass", "Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class T3CarsClass: public Ui_T3CarsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T3CARS_H
