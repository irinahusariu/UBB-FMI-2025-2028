/********************************************************************************
** Form generated from reading UI file 'REMicrobialWorld.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMICROBIALWORLD_H
#define UI_REMICROBIALWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REMicrobialWorldClass
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QComboBox *comboBox;
    QLineEdit *nameInput;
    QLineEdit *speciesInput;
    QLineEdit *sizeInput;
    QLineEdit *diseaseInput;
    QPushButton *addBtn;
    QListWidget *listWidget;
    QPushButton *disBtn;
    QPushButton *addDisBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REMicrobialWorldClass)
    {
        if (REMicrobialWorldClass->objectName().isEmpty())
            REMicrobialWorldClass->setObjectName("REMicrobialWorldClass");
        REMicrobialWorldClass->resize(600, 400);
        centralWidget = new QWidget(REMicrobialWorldClass);
        centralWidget->setObjectName("centralWidget");
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 20, 256, 192));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(300, 20, 72, 24));
        nameInput = new QLineEdit(centralWidget);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(300, 60, 113, 24));
        speciesInput = new QLineEdit(centralWidget);
        speciesInput->setObjectName("speciesInput");
        speciesInput->setGeometry(QRect(300, 90, 113, 24));
        sizeInput = new QLineEdit(centralWidget);
        sizeInput->setObjectName("sizeInput");
        sizeInput->setGeometry(QRect(300, 120, 113, 24));
        diseaseInput = new QLineEdit(centralWidget);
        diseaseInput->setObjectName("diseaseInput");
        diseaseInput->setGeometry(QRect(300, 150, 113, 24));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName("addBtn");
        addBtn->setGeometry(QRect(440, 100, 80, 24));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 220, 256, 111));
        disBtn = new QPushButton(centralWidget);
        disBtn->setObjectName("disBtn");
        disBtn->setGeometry(QRect(300, 260, 141, 24));
        addDisBtn = new QPushButton(centralWidget);
        addDisBtn->setObjectName("addDisBtn");
        addDisBtn->setGeometry(QRect(319, 290, 101, 24));
        REMicrobialWorldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(REMicrobialWorldClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        REMicrobialWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REMicrobialWorldClass);
        mainToolBar->setObjectName("mainToolBar");
        REMicrobialWorldClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(REMicrobialWorldClass);
        statusBar->setObjectName("statusBar");
        REMicrobialWorldClass->setStatusBar(statusBar);

        retranslateUi(REMicrobialWorldClass);

        QMetaObject::connectSlotsByName(REMicrobialWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *REMicrobialWorldClass)
    {
        REMicrobialWorldClass->setWindowTitle(QCoreApplication::translate("REMicrobialWorldClass", "REMicrobialWorld", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("REMicrobialWorldClass", "name", nullptr));
        speciesInput->setPlaceholderText(QCoreApplication::translate("REMicrobialWorldClass", "species", nullptr));
        sizeInput->setPlaceholderText(QCoreApplication::translate("REMicrobialWorldClass", "size", nullptr));
        diseaseInput->setPlaceholderText(QCoreApplication::translate("REMicrobialWorldClass", "dis1;dis2", nullptr));
        addBtn->setText(QCoreApplication::translate("REMicrobialWorldClass", "ADD", nullptr));
        disBtn->setText(QCoreApplication::translate("REMicrobialWorldClass", "SHOW DISEASES", nullptr));
        addDisBtn->setText(QCoreApplication::translate("REMicrobialWorldClass", "ADD DISEASE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REMicrobialWorldClass: public Ui_REMicrobialWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMICROBIALWORLD_H
