/********************************************************************************
** Form generated from reading UI file 'ParticipantWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICIPANTWINDOW_H
#define UI_PARTICIPANTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParticipantWindowClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLineEdit *idInput;
    QLineEdit *ansInput;
    QPushButton *answBtn;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ParticipantWindowClass)
    {
        if (ParticipantWindowClass->objectName().isEmpty())
            ParticipantWindowClass->setObjectName("ParticipantWindowClass");
        ParticipantWindowClass->resize(600, 400);
        centralWidget = new QWidget(ParticipantWindowClass);
        centralWidget->setObjectName("centralWidget");
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 60, 256, 192));
        idInput = new QLineEdit(centralWidget);
        idInput->setObjectName("idInput");
        idInput->setGeometry(QRect(310, 70, 113, 24));
        ansInput = new QLineEdit(centralWidget);
        ansInput->setObjectName("ansInput");
        ansInput->setGeometry(QRect(310, 100, 181, 24));
        answBtn = new QPushButton(centralWidget);
        answBtn->setObjectName("answBtn");
        answBtn->setGeometry(QRect(310, 130, 80, 24));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 260, 101, 16));
        ParticipantWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ParticipantWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ParticipantWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ParticipantWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        ParticipantWindowClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ParticipantWindowClass);
        statusBar->setObjectName("statusBar");
        ParticipantWindowClass->setStatusBar(statusBar);

        retranslateUi(ParticipantWindowClass);

        QMetaObject::connectSlotsByName(ParticipantWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *ParticipantWindowClass)
    {
        ParticipantWindowClass->setWindowTitle(QCoreApplication::translate("ParticipantWindowClass", "ParticipantWindow", nullptr));
        idInput->setPlaceholderText(QCoreApplication::translate("ParticipantWindowClass", "id", nullptr));
        ansInput->setPlaceholderText(QCoreApplication::translate("ParticipantWindowClass", "answer", nullptr));
        answBtn->setText(QCoreApplication::translate("ParticipantWindowClass", "ANSWER", nullptr));
        label->setText(QCoreApplication::translate("ParticipantWindowClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParticipantWindowClass: public Ui_ParticipantWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICIPANTWINDOW_H
