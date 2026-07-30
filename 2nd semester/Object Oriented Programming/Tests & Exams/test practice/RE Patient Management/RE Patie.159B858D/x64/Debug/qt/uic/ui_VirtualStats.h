/********************************************************************************
** Form generated from reading UI file 'VirtualStats.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUALSTATS_H
#define UI_VIRTUALSTATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VirtualStatsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VirtualStatsClass)
    {
        if (VirtualStatsClass->objectName().isEmpty())
            VirtualStatsClass->setObjectName("VirtualStatsClass");
        VirtualStatsClass->resize(600, 400);
        menuBar = new QMenuBar(VirtualStatsClass);
        menuBar->setObjectName("menuBar");
        VirtualStatsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VirtualStatsClass);
        mainToolBar->setObjectName("mainToolBar");
        VirtualStatsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VirtualStatsClass);
        centralWidget->setObjectName("centralWidget");
        VirtualStatsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VirtualStatsClass);
        statusBar->setObjectName("statusBar");
        VirtualStatsClass->setStatusBar(statusBar);

        retranslateUi(VirtualStatsClass);

        QMetaObject::connectSlotsByName(VirtualStatsClass);
    } // setupUi

    void retranslateUi(QMainWindow *VirtualStatsClass)
    {
        VirtualStatsClass->setWindowTitle(QCoreApplication::translate("VirtualStatsClass", "VirtualStats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VirtualStatsClass: public Ui_VirtualStatsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUALSTATS_H
