/********************************************************************************
** Form generated from reading UI file 'CollectorWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLECTORWINDOW_H
#define UI_COLLECTORWINDOW_H

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

class Ui_CollectorWindowClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QListWidget *listWidget;
    QListWidget *offerList;
    QLineEdit *nameInput;
    QLineEdit *priceInput;
    QLineEdit *dateInput;
    QPushButton *bidBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CollectorWindowClass)
    {
        if (CollectorWindowClass->objectName().isEmpty())
            CollectorWindowClass->setObjectName("CollectorWindowClass");
        CollectorWindowClass->resize(600, 400);
        centralWidget = new QWidget(CollectorWindowClass);
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

        priceInput = new QLineEdit(centralWidget);
        priceInput->setObjectName("priceInput");

        verticalLayout->addWidget(priceInput);

        dateInput = new QLineEdit(centralWidget);
        dateInput->setObjectName("dateInput");

        verticalLayout->addWidget(dateInput);

        bidBtn = new QPushButton(centralWidget);
        bidBtn->setObjectName("bidBtn");

        verticalLayout->addWidget(bidBtn);

        CollectorWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CollectorWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        CollectorWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CollectorWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        CollectorWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CollectorWindowClass);
        statusBar->setObjectName("statusBar");
        CollectorWindowClass->setStatusBar(statusBar);

        retranslateUi(CollectorWindowClass);

        QMetaObject::connectSlotsByName(CollectorWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *CollectorWindowClass)
    {
        CollectorWindowClass->setWindowTitle(QCoreApplication::translate("CollectorWindowClass", "CollectorWindow", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("CollectorWindowClass", "name", nullptr));
        priceInput->setPlaceholderText(QCoreApplication::translate("CollectorWindowClass", "offer", nullptr));
        dateInput->setPlaceholderText(QCoreApplication::translate("CollectorWindowClass", "yyy-mm-dd", nullptr));
        bidBtn->setText(QCoreApplication::translate("CollectorWindowClass", "BID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CollectorWindowClass: public Ui_CollectorWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLECTORWINDOW_H
