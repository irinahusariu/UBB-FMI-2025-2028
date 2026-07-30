/********************************************************************************
** Form generated from reading UI file 'PEStarCatalogue.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PESTARCATALOGUE_H
#define UI_PESTARCATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PEStarCatalogueClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PEStarCatalogueClass)
    {
        if (PEStarCatalogueClass->objectName().isEmpty())
            PEStarCatalogueClass->setObjectName("PEStarCatalogueClass");
        PEStarCatalogueClass->resize(600, 400);
        menuBar = new QMenuBar(PEStarCatalogueClass);
        menuBar->setObjectName("menuBar");
        PEStarCatalogueClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PEStarCatalogueClass);
        mainToolBar->setObjectName("mainToolBar");
        PEStarCatalogueClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PEStarCatalogueClass);
        centralWidget->setObjectName("centralWidget");
        PEStarCatalogueClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PEStarCatalogueClass);
        statusBar->setObjectName("statusBar");
        PEStarCatalogueClass->setStatusBar(statusBar);

        retranslateUi(PEStarCatalogueClass);

        QMetaObject::connectSlotsByName(PEStarCatalogueClass);
    } // setupUi

    void retranslateUi(QMainWindow *PEStarCatalogueClass)
    {
        PEStarCatalogueClass->setWindowTitle(QCoreApplication::translate("PEStarCatalogueClass", "PEStarCatalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PEStarCatalogueClass: public Ui_PEStarCatalogueClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PESTARCATALOGUE_H
