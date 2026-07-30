/********************************************************************************
** Form generated from reading UI file 'BacteriaView.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACTERIAVIEW_H
#define UI_BACTERIAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BacteriaViewClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BacteriaViewClass)
    {
        if (BacteriaViewClass->objectName().isEmpty())
            BacteriaViewClass->setObjectName("BacteriaViewClass");
        BacteriaViewClass->resize(600, 400);
        menuBar = new QMenuBar(BacteriaViewClass);
        menuBar->setObjectName("menuBar");
        BacteriaViewClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BacteriaViewClass);
        mainToolBar->setObjectName("mainToolBar");
        BacteriaViewClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BacteriaViewClass);
        centralWidget->setObjectName("centralWidget");
        BacteriaViewClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BacteriaViewClass);
        statusBar->setObjectName("statusBar");
        BacteriaViewClass->setStatusBar(statusBar);

        retranslateUi(BacteriaViewClass);

        QMetaObject::connectSlotsByName(BacteriaViewClass);
    } // setupUi

    void retranslateUi(QMainWindow *BacteriaViewClass)
    {
        BacteriaViewClass->setWindowTitle(QCoreApplication::translate("BacteriaViewClass", "BacteriaView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BacteriaViewClass: public Ui_BacteriaViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACTERIAVIEW_H
