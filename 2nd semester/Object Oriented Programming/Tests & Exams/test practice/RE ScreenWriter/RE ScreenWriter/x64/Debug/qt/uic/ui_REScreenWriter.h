/********************************************************************************
** Form generated from reading UI file 'REScreenWriter.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESCREENWRITER_H
#define UI_RESCREENWRITER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REScreenWriterClass
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QLineEdit *descInput;
    QLineEdit *actInput;
    QPushButton *addBtn;
    QPushButton *acceptBtn;
    QPushButton *plotBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REScreenWriterClass)
    {
        if (REScreenWriterClass->objectName().isEmpty())
            REScreenWriterClass->setObjectName("REScreenWriterClass");
        REScreenWriterClass->resize(600, 400);
        centralWidget = new QWidget(REScreenWriterClass);
        centralWidget->setObjectName("centralWidget");
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 50, 256, 192));
        descInput = new QLineEdit(centralWidget);
        descInput->setObjectName("descInput");
        descInput->setGeometry(QRect(320, 30, 113, 24));
        actInput = new QLineEdit(centralWidget);
        actInput->setObjectName("actInput");
        actInput->setGeometry(QRect(320, 60, 113, 24));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(450, 40, 80, 24));
        acceptBtn = new QPushButton(centralWidget);
        acceptBtn->setObjectName("acceptBtn");
        acceptBtn->setGeometry(QRect(450, 70, 80, 24));
        plotBtn = new QPushButton(centralWidget);
        plotBtn->setObjectName("plotBtn");
        plotBtn->setGeometry(QRect(340, 130, 80, 24));
        REScreenWriterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(REScreenWriterClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        REScreenWriterClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REScreenWriterClass);
        mainToolBar->setObjectName("mainToolBar");
        REScreenWriterClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(REScreenWriterClass);
        statusBar->setObjectName("statusBar");
        REScreenWriterClass->setStatusBar(statusBar);

        retranslateUi(REScreenWriterClass);

        QMetaObject::connectSlotsByName(REScreenWriterClass);
    } // setupUi

    void retranslateUi(QMainWindow *REScreenWriterClass)
    {
        REScreenWriterClass->setWindowTitle(QCoreApplication::translate("REScreenWriterClass", "REScreenWriter", nullptr));
        descInput->setPlaceholderText(QCoreApplication::translate("REScreenWriterClass", "desc", nullptr));
        actInput->setPlaceholderText(QCoreApplication::translate("REScreenWriterClass", "act", nullptr));
        addBtn->setText(QCoreApplication::translate("REScreenWriterClass", "ADD", nullptr));
        acceptBtn->setText(QCoreApplication::translate("REScreenWriterClass", "ACCEPT", nullptr));
        plotBtn->setText(QCoreApplication::translate("REScreenWriterClass", "Save Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REScreenWriterClass: public Ui_REScreenWriterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCREENWRITER_H
