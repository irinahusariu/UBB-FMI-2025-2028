/********************************************************************************
** Form generated from reading UI file 'Seminar6personal.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEMINAR6PERSONAL_H
#define UI_SEMINAR6PERSONAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seminar6personalClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Seminar6personalClass)
    {
        if (Seminar6personalClass->objectName().isEmpty())
            Seminar6personalClass->setObjectName("Seminar6personalClass");
        Seminar6personalClass->resize(600, 400);
        menuBar = new QMenuBar(Seminar6personalClass);
        menuBar->setObjectName("menuBar");
        Seminar6personalClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Seminar6personalClass);
        mainToolBar->setObjectName("mainToolBar");
        Seminar6personalClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Seminar6personalClass);
        centralWidget->setObjectName("centralWidget");
        Seminar6personalClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Seminar6personalClass);
        statusBar->setObjectName("statusBar");
        Seminar6personalClass->setStatusBar(statusBar);

        retranslateUi(Seminar6personalClass);

        QMetaObject::connectSlotsByName(Seminar6personalClass);
    } // setupUi

    void retranslateUi(QMainWindow *Seminar6personalClass)
    {
        Seminar6personalClass->setWindowTitle(QCoreApplication::translate("Seminar6personalClass", "Seminar6personal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seminar6personalClass: public Ui_Seminar6personalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEMINAR6PERSONAL_H
