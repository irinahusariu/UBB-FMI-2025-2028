/********************************************************************************
** Form generated from reading UI file 'DriverMap.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERMAP_H
#define UI_DRIVERMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverMapClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DriverMapClass)
    {
        if (DriverMapClass->objectName().isEmpty())
            DriverMapClass->setObjectName("DriverMapClass");
        DriverMapClass->resize(600, 400);
        menuBar = new QMenuBar(DriverMapClass);
        menuBar->setObjectName("menuBar");
        DriverMapClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DriverMapClass);
        mainToolBar->setObjectName("mainToolBar");
        DriverMapClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DriverMapClass);
        centralWidget->setObjectName("centralWidget");
        DriverMapClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DriverMapClass);
        statusBar->setObjectName("statusBar");
        DriverMapClass->setStatusBar(statusBar);

        retranslateUi(DriverMapClass);

        QMetaObject::connectSlotsByName(DriverMapClass);
    } // setupUi

    void retranslateUi(QMainWindow *DriverMapClass)
    {
        DriverMapClass->setWindowTitle(QCoreApplication::translate("DriverMapClass", "DriverMap", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DriverMapClass: public Ui_DriverMapClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERMAP_H
