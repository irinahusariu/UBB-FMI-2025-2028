/********************************************************************************
** Form generated from reading UI file 'AdminWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QListWidget *offerList;
    QLineEdit *nameInput;
    QLineEdit *categoryInput;
    QLineEdit *priceInput;
    QPushButton *addBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AdminWindowClass)
    {
        if (AdminWindowClass->objectName().isEmpty())
            AdminWindowClass->setObjectName("AdminWindowClass");
        AdminWindowClass->resize(600, 400);
        centralWidget = new QWidget(AdminWindowClass);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        offerList = new QListWidget(centralWidget);
        offerList->setObjectName("offerList");

        verticalLayout->addWidget(offerList);

        nameInput = new QLineEdit(centralWidget);
        nameInput->setObjectName("nameInput");

        verticalLayout->addWidget(nameInput);

        categoryInput = new QLineEdit(centralWidget);
        categoryInput->setObjectName("categoryInput");

        verticalLayout->addWidget(categoryInput);

        priceInput = new QLineEdit(centralWidget);
        priceInput->setObjectName("priceInput");

        verticalLayout->addWidget(priceInput);

        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");

        verticalLayout->addWidget(addBtn);

        AdminWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AdminWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        AdminWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AdminWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        AdminWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AdminWindowClass);
        statusBar->setObjectName("statusBar");
        AdminWindowClass->setStatusBar(statusBar);

        retranslateUi(AdminWindowClass);

        QMetaObject::connectSlotsByName(AdminWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindowClass)
    {
        AdminWindowClass->setWindowTitle(QCoreApplication::translate("AdminWindowClass", "AdminWindow", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("AdminWindowClass", "name", nullptr));
        categoryInput->setPlaceholderText(QCoreApplication::translate("AdminWindowClass", "categ", nullptr));
        priceInput->setPlaceholderText(QCoreApplication::translate("AdminWindowClass", "price", nullptr));
        addBtn->setText(QCoreApplication::translate("AdminWindowClass", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindowClass: public Ui_AdminWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
