/********************************************************************************
** Form generated from reading UI file 'Seminar6GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEMINAR6GUI_H
#define UI_SEMINAR6GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seminar6GUIClass
{
public:
    QWidget *centralWidget;
    QTableView *studentTableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Seminar6GUIClass)
    {
        if (Seminar6GUIClass->objectName().isEmpty())
            Seminar6GUIClass->setObjectName("Seminar6GUIClass");
        Seminar6GUIClass->resize(600, 400);
        centralWidget = new QWidget(Seminar6GUIClass);
        centralWidget->setObjectName("centralWidget");
        studentTableView = new QTableView(centralWidget);
        studentTableView->setObjectName("studentTableView");
        studentTableView->setGeometry(QRect(120, 20, 256, 192));
        Seminar6GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Seminar6GUIClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Seminar6GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Seminar6GUIClass);
        mainToolBar->setObjectName("mainToolBar");
        Seminar6GUIClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Seminar6GUIClass);
        statusBar->setObjectName("statusBar");
        Seminar6GUIClass->setStatusBar(statusBar);

        retranslateUi(Seminar6GUIClass);

        QMetaObject::connectSlotsByName(Seminar6GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *Seminar6GUIClass)
    {
        Seminar6GUIClass->setWindowTitle(QCoreApplication::translate("Seminar6GUIClass", "Seminar6GUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seminar6GUIClass: public Ui_Seminar6GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEMINAR6GUI_H
