/********************************************************************************
** Form generated from reading UI file 'PEProgrammersIssues.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEPROGRAMMERSISSUES_H
#define UI_PEPROGRAMMERSISSUES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PEProgrammersIssuesClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PEProgrammersIssuesClass)
    {
        if (PEProgrammersIssuesClass->objectName().isEmpty())
            PEProgrammersIssuesClass->setObjectName("PEProgrammersIssuesClass");
        PEProgrammersIssuesClass->resize(600, 400);
        menuBar = new QMenuBar(PEProgrammersIssuesClass);
        menuBar->setObjectName("menuBar");
        PEProgrammersIssuesClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PEProgrammersIssuesClass);
        mainToolBar->setObjectName("mainToolBar");
        PEProgrammersIssuesClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PEProgrammersIssuesClass);
        centralWidget->setObjectName("centralWidget");
        PEProgrammersIssuesClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PEProgrammersIssuesClass);
        statusBar->setObjectName("statusBar");
        PEProgrammersIssuesClass->setStatusBar(statusBar);

        retranslateUi(PEProgrammersIssuesClass);

        QMetaObject::connectSlotsByName(PEProgrammersIssuesClass);
    } // setupUi

    void retranslateUi(QMainWindow *PEProgrammersIssuesClass)
    {
        PEProgrammersIssuesClass->setWindowTitle(QCoreApplication::translate("PEProgrammersIssuesClass", "PEProgrammersIssues", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PEProgrammersIssuesClass: public Ui_PEProgrammersIssuesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEPROGRAMMERSISSUES_H
