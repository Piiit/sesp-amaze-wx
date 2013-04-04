/********************************************************************************
** Form generated from reading UI file 'MazeWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAZEWINDOW_H
#define UI_MAZEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MazeWindowClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MazeWindowClass)
    {
        if (MazeWindowClass->objectName().isEmpty())
            MazeWindowClass->setObjectName(QStringLiteral("MazeWindowClass"));
        MazeWindowClass->resize(600, 400);
        menuBar = new QMenuBar(MazeWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MazeWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MazeWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MazeWindowClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MazeWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MazeWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MazeWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MazeWindowClass->setStatusBar(statusBar);

        retranslateUi(MazeWindowClass);

        QMetaObject::connectSlotsByName(MazeWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MazeWindowClass)
    {
        MazeWindowClass->setWindowTitle(QApplication::translate("MazeWindowClass", "MazeWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MazeWindowClass: public Ui_MazeWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAZEWINDOW_H
