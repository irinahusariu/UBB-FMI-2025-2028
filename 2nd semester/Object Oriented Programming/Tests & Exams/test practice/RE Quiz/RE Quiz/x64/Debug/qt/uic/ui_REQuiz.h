/********************************************************************************
** Form generated from reading UI file 'REQuiz.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIZ_H
#define UI_REQUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REQuizClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REQuizClass)
    {
        if (REQuizClass->objectName().isEmpty())
            REQuizClass->setObjectName("REQuizClass");
        REQuizClass->resize(600, 400);
        menuBar = new QMenuBar(REQuizClass);
        menuBar->setObjectName("menuBar");
        REQuizClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REQuizClass);
        mainToolBar->setObjectName("mainToolBar");
        REQuizClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(REQuizClass);
        centralWidget->setObjectName("centralWidget");
        REQuizClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(REQuizClass);
        statusBar->setObjectName("statusBar");
        REQuizClass->setStatusBar(statusBar);

        retranslateUi(REQuizClass);

        QMetaObject::connectSlotsByName(REQuizClass);
    } // setupUi

    void retranslateUi(QMainWindow *REQuizClass)
    {
        REQuizClass->setWindowTitle(QCoreApplication::translate("REQuizClass", "REQuiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REQuizClass: public Ui_REQuizClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIZ_H
