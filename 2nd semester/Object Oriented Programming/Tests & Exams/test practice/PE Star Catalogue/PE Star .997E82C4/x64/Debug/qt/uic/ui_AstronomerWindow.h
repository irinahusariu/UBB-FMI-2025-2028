/********************************************************************************
** Form generated from reading UI file 'AstronomerWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASTRONOMERWINDOW_H
#define UI_ASTRONOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AstronomerWindowClass
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QListView *listView;
    QCheckBox *checkBox;
    QLineEdit *nameInput;
    QLineEdit *raInput;
    QLineEdit *decInput;
    QLineEdit *diameterInput;
    QLineEdit *progressiveName;
    QPushButton *addBtn;
    QLabel *label;
    QPushButton *viewBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AstronomerWindowClass)
    {
        if (AstronomerWindowClass->objectName().isEmpty())
            AstronomerWindowClass->setObjectName("AstronomerWindowClass");
        AstronomerWindowClass->resize(600, 400);
        centralWidget = new QWidget(AstronomerWindowClass);
        centralWidget->setObjectName("centralWidget");
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 256, 192));
        listView = new QListView(centralWidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(10, 210, 256, 192));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(340, 250, 201, 21));
        nameInput = new QLineEdit(centralWidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(270, 40, 113, 24));
        raInput = new QLineEdit(centralWidget);
        raInput->setObjectName("raInput");
        raInput->setGeometry(QRect(470, 40, 113, 24));
        decInput = new QLineEdit(centralWidget);
        decInput->setObjectName("decInput");
        decInput->setGeometry(QRect(470, 70, 113, 24));
        diameterInput = new QLineEdit(centralWidget);
        diameterInput->setObjectName("diameterInput");
        diameterInput->setGeometry(QRect(270, 70, 113, 24));
        progressiveName = new QLineEdit(centralWidget);
        progressiveName->setObjectName("progressiveName");
        progressiveName->setGeometry(QRect(280, 160, 231, 24));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(390, 110, 80, 24));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 320, 151, 16));
        viewBtn = new QPushButton(centralWidget);
        viewBtn->setObjectName("viewBtn");
        viewBtn->setGeometry(QRect(390, 210, 80, 24));
        AstronomerWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AstronomerWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        AstronomerWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AstronomerWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        AstronomerWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AstronomerWindowClass);
        statusBar->setObjectName("statusBar");
        AstronomerWindowClass->setStatusBar(statusBar);

        retranslateUi(AstronomerWindowClass);

        QMetaObject::connectSlotsByName(AstronomerWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *AstronomerWindowClass)
    {
        AstronomerWindowClass->setWindowTitle(QCoreApplication::translate("AstronomerWindowClass", "AstronomerWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("AstronomerWindowClass", "See stars in studied constellation", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("AstronomerWindowClass", "Name", nullptr));
        raInput->setPlaceholderText(QCoreApplication::translate("AstronomerWindowClass", "RA ", nullptr));
        decInput->setText(QString());
        decInput->setPlaceholderText(QCoreApplication::translate("AstronomerWindowClass", "DEC", nullptr));
        diameterInput->setPlaceholderText(QCoreApplication::translate("AstronomerWindowClass", "Diam", nullptr));
        progressiveName->setPlaceholderText(QCoreApplication::translate("AstronomerWindowClass", "Search star by name", nullptr));
        addBtn->setText(QCoreApplication::translate("AstronomerWindowClass", "Add", nullptr));
        label->setText(QCoreApplication::translate("AstronomerWindowClass", "TextLabel", nullptr));
        viewBtn->setText(QCoreApplication::translate("AstronomerWindowClass", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AstronomerWindowClass: public Ui_AstronomerWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASTRONOMERWINDOW_H
