/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *RembyID;
    QLineEdit *lineRemoveID;
    QLabel *Title;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *listLabel;
    QListWidget *ItemList;
    QLabel *labelID;
    QPushButton *clickFind;
    QLabel *labelDesc;
    QLabel *FindbyID;
    QLabel *label_pic2;
    QLabel *labelLoc;
    QPushButton *clickRemove;
    QLineEdit *lineDesc;
    QLineEdit *lineFindID;
    QPushButton *AddItem;
    QLineEdit *lineLoc;
    QLineEdit *lineID;
    QLabel *label_pic;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(384, 443);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        RembyID = new QLabel(centralwidget);
        RembyID->setObjectName("RembyID");
        RembyID->setGeometry(QRect(90, 210, 91, 20));
        RembyID->setMaximumSize(QSize(16777215, 16777215));
        RembyID->setFrameShape(QFrame::Shape::StyledPanel);
        RembyID->setFrameShadow(QFrame::Shadow::Plain);
        RembyID->setTextFormat(Qt::TextFormat::AutoText);
        RembyID->setWordWrap(false);
        lineRemoveID = new QLineEdit(centralwidget);
        lineRemoveID->setObjectName("lineRemoveID");
        lineRemoveID->setGeometry(QRect(190, 210, 101, 21));
        Title = new QLabel(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(90, 20, 201, 41));
        Title->setMaximumSize(QSize(16777215, 16777215));
        Title->setFrameShape(QFrame::Shape::Box);
        Title->setFrameShadow(QFrame::Shadow::Sunken);
        Title->setTextFormat(Qt::TextFormat::AutoText);
        Title->setWordWrap(false);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 260, 201, 98));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listLabel = new QLabel(verticalLayoutWidget);
        listLabel->setObjectName("listLabel");
        listLabel->setMaximumSize(QSize(16777215, 16777215));
        listLabel->setFrameShape(QFrame::Shape::StyledPanel);
        listLabel->setFrameShadow(QFrame::Shadow::Raised);
        listLabel->setTextFormat(Qt::TextFormat::AutoText);
        listLabel->setWordWrap(false);

        verticalLayout->addWidget(listLabel);

        ItemList = new QListWidget(verticalLayoutWidget);
        ItemList->setObjectName("ItemList");

        verticalLayout->addWidget(ItemList);

        labelID = new QLabel(centralwidget);
        labelID->setObjectName("labelID");
        labelID->setGeometry(QRect(90, 70, 91, 20));
        labelID->setMaximumSize(QSize(16777215, 16777215));
        labelID->setFrameShape(QFrame::Shape::StyledPanel);
        labelID->setFrameShadow(QFrame::Shadow::Plain);
        labelID->setTextFormat(Qt::TextFormat::AutoText);
        labelID->setWordWrap(false);
        clickFind = new QPushButton(centralwidget);
        clickFind->setObjectName("clickFind");
        clickFind->setGeometry(QRect(190, 180, 101, 21));
        labelDesc = new QLabel(centralwidget);
        labelDesc->setObjectName("labelDesc");
        labelDesc->setGeometry(QRect(90, 90, 91, 20));
        labelDesc->setMaximumSize(QSize(16777215, 16777215));
        labelDesc->setFrameShape(QFrame::Shape::StyledPanel);
        labelDesc->setFrameShadow(QFrame::Shadow::Plain);
        labelDesc->setTextFormat(Qt::TextFormat::AutoText);
        labelDesc->setWordWrap(false);
        FindbyID = new QLabel(centralwidget);
        FindbyID->setObjectName("FindbyID");
        FindbyID->setGeometry(QRect(90, 160, 91, 20));
        FindbyID->setMaximumSize(QSize(16777215, 16777215));
        FindbyID->setFrameShape(QFrame::Shape::StyledPanel);
        FindbyID->setFrameShadow(QFrame::Shadow::Plain);
        FindbyID->setTextFormat(Qt::TextFormat::AutoText);
        FindbyID->setWordWrap(false);
        label_pic2 = new QLabel(centralwidget);
        label_pic2->setObjectName("label_pic2");
        label_pic2->setGeometry(QRect(300, 10, 71, 71));
        labelLoc = new QLabel(centralwidget);
        labelLoc->setObjectName("labelLoc");
        labelLoc->setGeometry(QRect(90, 110, 91, 20));
        labelLoc->setMaximumSize(QSize(16777215, 16777215));
        labelLoc->setFrameShape(QFrame::Shape::StyledPanel);
        labelLoc->setFrameShadow(QFrame::Shadow::Plain);
        labelLoc->setTextFormat(Qt::TextFormat::AutoText);
        labelLoc->setWordWrap(false);
        clickRemove = new QPushButton(centralwidget);
        clickRemove->setObjectName("clickRemove");
        clickRemove->setGeometry(QRect(190, 230, 101, 21));
        lineDesc = new QLineEdit(centralwidget);
        lineDesc->setObjectName("lineDesc");
        lineDesc->setGeometry(QRect(190, 90, 101, 21));
        lineFindID = new QLineEdit(centralwidget);
        lineFindID->setObjectName("lineFindID");
        lineFindID->setGeometry(QRect(190, 160, 101, 21));
        AddItem = new QPushButton(centralwidget);
        AddItem->setObjectName("AddItem");
        AddItem->setGeometry(QRect(190, 130, 101, 21));
        lineLoc = new QLineEdit(centralwidget);
        lineLoc->setObjectName("lineLoc");
        lineLoc->setGeometry(QRect(190, 110, 101, 21));
        lineID = new QLineEdit(centralwidget);
        lineID->setObjectName("lineID");
        lineID->setGeometry(QRect(190, 70, 101, 21));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(10, 310, 71, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 384, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        RembyID->setText(QCoreApplication::translate("MainWindow", "Remove by ID:", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Congo Inventory System</span></p></body></html>", nullptr));
        listLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">List of Items :</span></p></body></html>", nullptr));
        labelID->setText(QCoreApplication::translate("MainWindow", "ID :", nullptr));
        clickFind->setText(QCoreApplication::translate("MainWindow", "Search ->", nullptr));
        labelDesc->setText(QCoreApplication::translate("MainWindow", "Description :", nullptr));
        FindbyID->setText(QCoreApplication::translate("MainWindow", "Find by ID:", nullptr));
        label_pic2->setText(QString());
        labelLoc->setText(QCoreApplication::translate("MainWindow", "Location :", nullptr));
        clickRemove->setText(QCoreApplication::translate("MainWindow", "Remove (-)", nullptr));
        AddItem->setText(QCoreApplication::translate("MainWindow", "Add Item (+)", nullptr));
        label_pic->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
