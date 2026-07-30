/********************************************************************************
** Form generated from reading UI file 'REPatientManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPATIENTMANAGEMENT_H
#define UI_REPATIENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_REPatientManagementClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;
    QCheckBox *checkBox;
    QLineEdit *nameInput;
    QLineEdit *diagnosisInput;
    QLineEdit *specialisationInput;
    QLineEdit *docInput;
    QLineEdit *dateInput;
    QPushButton *addBtn;
    QPushButton *updateBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REPatientManagementClass)
    {
        if (REPatientManagementClass->objectName().isEmpty())
            REPatientManagementClass->setObjectName("REPatientManagementClass");
        REPatientManagementClass->resize(600, 400);
        centralWidget = new QWidget(REPatientManagementClass);
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

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");

        verticalLayout->addWidget(checkBox);

        nameInput = new QLineEdit(centralWidget);
        nameInput->setObjectName("nameInput");

        verticalLayout->addWidget(nameInput);

        diagnosisInput = new QLineEdit(centralWidget);
        diagnosisInput->setObjectName("diagnosisInput");

        verticalLayout->addWidget(diagnosisInput);

        specialisationInput = new QLineEdit(centralWidget);
        specialisationInput->setObjectName("specialisationInput");

        verticalLayout->addWidget(specialisationInput);

        docInput = new QLineEdit(centralWidget);
        docInput->setObjectName("docInput");

        verticalLayout->addWidget(docInput);

        dateInput = new QLineEdit(centralWidget);
        dateInput->setObjectName("dateInput");

        verticalLayout->addWidget(dateInput);

        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");

        verticalLayout->addWidget(addBtn);

        updateBtn = new QPushButton(centralWidget);
        updateBtn->setObjectName("updateBtn");

        verticalLayout->addWidget(updateBtn);

        REPatientManagementClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(REPatientManagementClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        REPatientManagementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REPatientManagementClass);
        mainToolBar->setObjectName("mainToolBar");
        REPatientManagementClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(REPatientManagementClass);
        statusBar->setObjectName("statusBar");
        REPatientManagementClass->setStatusBar(statusBar);

        retranslateUi(REPatientManagementClass);

        QMetaObject::connectSlotsByName(REPatientManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *REPatientManagementClass)
    {
        REPatientManagementClass->setWindowTitle(QCoreApplication::translate("REPatientManagementClass", "REPatientManagement", nullptr));
        label->setText(QCoreApplication::translate("REPatientManagementClass", "TextLabel", nullptr));
        checkBox->setText(QCoreApplication::translate("REPatientManagementClass", "show my patients", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("REPatientManagementClass", "name", nullptr));
        diagnosisInput->setPlaceholderText(QCoreApplication::translate("REPatientManagementClass", "diagnosis", nullptr));
        specialisationInput->setPlaceholderText(QCoreApplication::translate("REPatientManagementClass", "specialisation", nullptr));
        docInput->setPlaceholderText(QCoreApplication::translate("REPatientManagementClass", "doctor", nullptr));
        dateInput->setPlaceholderText(QCoreApplication::translate("REPatientManagementClass", "date", nullptr));
        addBtn->setText(QCoreApplication::translate("REPatientManagementClass", "ADD", nullptr));
        updateBtn->setText(QCoreApplication::translate("REPatientManagementClass", "UPDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REPatientManagementClass: public Ui_REPatientManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPATIENTMANAGEMENT_H
