/********************************************************************************
** Form generated from reading UI file 'ProgrammerWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMERWINDOW_H
#define UI_PROGRAMMERWINDOW_H

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

class Ui_ProgrammerWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *pname;
    QTableView *issueTable;
    QLineEdit *descriptionInput;
    QPushButton *resolveBtn;
    QPushButton *removeBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProgrammerWindowClass)
    {
        if (ProgrammerWindowClass->objectName().isEmpty())
            ProgrammerWindowClass->setObjectName("ProgrammerWindowClass");
        ProgrammerWindowClass->resize(600, 400);
        centralWidget = new QWidget(ProgrammerWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pname = new QLabel(centralWidget);
        pname->setObjectName("pname");

        verticalLayout->addWidget(pname);

        issueTable = new QTableView(centralWidget);
        issueTable->setObjectName("issueTable");

        verticalLayout->addWidget(issueTable);

        descriptionInput = new QLineEdit(centralWidget);
        descriptionInput->setObjectName("descriptionInput");

        verticalLayout->addWidget(descriptionInput);

        resolveBtn = new QPushButton(centralWidget);
        resolveBtn->setObjectName("resolveBtn");

        verticalLayout->addWidget(resolveBtn);

        removeBtn = new QPushButton(centralWidget);
        removeBtn->setObjectName("removeBtn");

        verticalLayout->addWidget(removeBtn);

        ProgrammerWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProgrammerWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ProgrammerWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProgrammerWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        ProgrammerWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProgrammerWindowClass);
        statusBar->setObjectName("statusBar");
        ProgrammerWindowClass->setStatusBar(statusBar);

        retranslateUi(ProgrammerWindowClass);

        QMetaObject::connectSlotsByName(ProgrammerWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProgrammerWindowClass)
    {
        ProgrammerWindowClass->setWindowTitle(QCoreApplication::translate("ProgrammerWindowClass", "ProgrammerWindow", nullptr));
        label->setText(QCoreApplication::translate("ProgrammerWindowClass", "Programmer Window", nullptr));
        pname->setText(QString());
        descriptionInput->setPlaceholderText(QCoreApplication::translate("ProgrammerWindowClass", "description", nullptr));
        resolveBtn->setText(QCoreApplication::translate("ProgrammerWindowClass", "Resolve", nullptr));
        removeBtn->setText(QCoreApplication::translate("ProgrammerWindowClass", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgrammerWindowClass: public Ui_ProgrammerWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMERWINDOW_H
