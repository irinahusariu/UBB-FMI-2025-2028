/********************************************************************************
** Form generated from reading UI file 'REQuiz3.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIZ3_H
#define UI_REQUIZ3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REQuiz3Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REQuiz3Class)
    {
        if (REQuiz3Class->objectName().isEmpty())
            REQuiz3Class->setObjectName("REQuiz3Class");
        REQuiz3Class->resize(600, 400);
        menuBar = new QMenuBar(REQuiz3Class);
        menuBar->setObjectName("menuBar");
        REQuiz3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REQuiz3Class);
        mainToolBar->setObjectName("mainToolBar");
        REQuiz3Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(REQuiz3Class);
        centralWidget->setObjectName("centralWidget");
        REQuiz3Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(REQuiz3Class);
        statusBar->setObjectName("statusBar");
        REQuiz3Class->setStatusBar(statusBar);

        retranslateUi(REQuiz3Class);

        QMetaObject::connectSlotsByName(REQuiz3Class);
    } // setupUi

    void retranslateUi(QMainWindow *REQuiz3Class)
    {
        REQuiz3Class->setWindowTitle(QCoreApplication::translate("REQuiz3Class", "REQuiz3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REQuiz3Class: public Ui_REQuiz3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIZ3_H
