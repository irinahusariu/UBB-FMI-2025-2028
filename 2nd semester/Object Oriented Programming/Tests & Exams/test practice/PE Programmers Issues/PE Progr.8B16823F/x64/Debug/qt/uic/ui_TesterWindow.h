/********************************************************************************
** Form generated from reading UI file 'TesterWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTERWINDOW_H
#define UI_TESTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TesterWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *tname;
    QTableView *issueTable;
    QLineEdit *descriptionInput;
    QPushButton *addBtn;
    QPushButton *removeBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TesterWindowClass)
    {
        if (TesterWindowClass->objectName().isEmpty())
            TesterWindowClass->setObjectName("TesterWindowClass");
        TesterWindowClass->resize(600, 400);
        centralWidget = new QWidget(TesterWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        tname = new QLabel(centralWidget);
        tname->setObjectName("tname");

        verticalLayout->addWidget(tname);

        issueTable = new QTableView(centralWidget);
        issueTable->setObjectName("issueTable");

        verticalLayout->addWidget(issueTable);

        descriptionInput = new QLineEdit(centralWidget);
        descriptionInput->setObjectName("descriptionInput");

        verticalLayout->addWidget(descriptionInput);

        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");

        verticalLayout->addWidget(addBtn);

        removeBtn = new QPushButton(centralWidget);
        removeBtn->setObjectName("removeBtn");

        verticalLayout->addWidget(removeBtn);

        TesterWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TesterWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        TesterWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TesterWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        TesterWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TesterWindowClass);
        statusBar->setObjectName("statusBar");
        TesterWindowClass->setStatusBar(statusBar);

        retranslateUi(TesterWindowClass);

        QMetaObject::connectSlotsByName(TesterWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *TesterWindowClass)
    {
        TesterWindowClass->setWindowTitle(QCoreApplication::translate("TesterWindowClass", "TesterWindow", nullptr));
        label->setText(QCoreApplication::translate("TesterWindowClass", "Tester Window", nullptr));
        tname->setText(QString());
        descriptionInput->setPlaceholderText(QCoreApplication::translate("TesterWindowClass", "description", nullptr));
        addBtn->setText(QCoreApplication::translate("TesterWindowClass", "Add", nullptr));
        removeBtn->setText(QCoreApplication::translate("TesterWindowClass", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TesterWindowClass: public Ui_TesterWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTERWINDOW_H
