/********************************************************************************
** Form generated from reading UI file 'REQuiz2.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIZ2_H
#define UI_REQUIZ2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REQuiz2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *REQuiz2Class)
    {
        if (REQuiz2Class->objectName().isEmpty())
            REQuiz2Class->setObjectName("REQuiz2Class");
        REQuiz2Class->resize(600, 400);
        menuBar = new QMenuBar(REQuiz2Class);
        menuBar->setObjectName("menuBar");
        REQuiz2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(REQuiz2Class);
        mainToolBar->setObjectName("mainToolBar");
        REQuiz2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(REQuiz2Class);
        centralWidget->setObjectName("centralWidget");
        REQuiz2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(REQuiz2Class);
        statusBar->setObjectName("statusBar");
        REQuiz2Class->setStatusBar(statusBar);

        retranslateUi(REQuiz2Class);

        QMetaObject::connectSlotsByName(REQuiz2Class);
    } // setupUi

    void retranslateUi(QMainWindow *REQuiz2Class)
    {
        REQuiz2Class->setWindowTitle(QCoreApplication::translate("REQuiz2Class", "REQuiz2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REQuiz2Class: public Ui_REQuiz2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUIZ2_H
