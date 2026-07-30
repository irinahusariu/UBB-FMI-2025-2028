/********************************************************************************
** Form generated from reading UI file 'PEDriverConnect.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEDRIVERCONNECT_H
#define UI_PEDRIVERCONNECT_H

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

class Ui_PEDriverConnectClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;
    QLineEdit *descInput;
    QLineEdit *latInput;
    QLineEdit *longInput;
    QPushButton *addBtn;
    QPushButton *validateBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PEDriverConnectClass)
    {
        if (PEDriverConnectClass->objectName().isEmpty())
            PEDriverConnectClass->setObjectName("PEDriverConnectClass");
        PEDriverConnectClass->resize(600, 400);
        centralWidget = new QWidget(PEDriverConnectClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);

        descInput = new QLineEdit(centralWidget);
        descInput->setObjectName("descInput");

        verticalLayout->addWidget(descInput);

        latInput = new QLineEdit(centralWidget);
        latInput->setObjectName("latInput");

        verticalLayout->addWidget(latInput);

        longInput = new QLineEdit(centralWidget);
        longInput->setObjectName("longInput");

        verticalLayout->addWidget(longInput);

        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");

        verticalLayout->addWidget(addBtn);

        validateBtn = new QPushButton(centralWidget);
        validateBtn->setObjectName("validateBtn");

        verticalLayout->addWidget(validateBtn);

        PEDriverConnectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PEDriverConnectClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        PEDriverConnectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PEDriverConnectClass);
        mainToolBar->setObjectName("mainToolBar");
        PEDriverConnectClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PEDriverConnectClass);
        statusBar->setObjectName("statusBar");
        PEDriverConnectClass->setStatusBar(statusBar);

        retranslateUi(PEDriverConnectClass);

        QMetaObject::connectSlotsByName(PEDriverConnectClass);
    } // setupUi

    void retranslateUi(QMainWindow *PEDriverConnectClass)
    {
        PEDriverConnectClass->setWindowTitle(QCoreApplication::translate("PEDriverConnectClass", "PEDriverConnect", nullptr));
        label->setText(QCoreApplication::translate("PEDriverConnectClass", "TextLabel", nullptr));
        descInput->setPlaceholderText(QCoreApplication::translate("PEDriverConnectClass", "description", nullptr));
        latInput->setPlaceholderText(QCoreApplication::translate("PEDriverConnectClass", "latitude", nullptr));
        longInput->setPlaceholderText(QCoreApplication::translate("PEDriverConnectClass", "longitude", nullptr));
        addBtn->setText(QCoreApplication::translate("PEDriverConnectClass", "ADD", nullptr));
        validateBtn->setText(QCoreApplication::translate("PEDriverConnectClass", "VALIDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PEDriverConnectClass: public Ui_PEDriverConnectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEDRIVERCONNECT_H
