/*
 * File:   mainwindow.cpp
 * Author: Emma Wuysang
 * Creator Notes: general section I used for connection, etc
 * Created on June 2, 2025 4:30 PM
 * Purpose: Develop a Simple Storage Management System using Ordered and Unordered Collections utilize a GUI
 */


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) // default
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // creates communication between buttons & code, done for all push buttons
    connect(ui->AddItem, &QPushButton::clicked, this, &MainWindow::onAddItemClicked);
    connect(ui->clickFind, &QPushButton::clicked, this, &MainWindow::onFindItemClicked);
    connect(ui->clickRemove, &QPushButton::clicked, this, &MainWindow::onRemoveItemClicked);

    // connecting the file>exit
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::displayAbtDialog);

    // Set image 1
    QPixmap pix("C:/Users/Main User/Downloads/Rainforest/Pic1/Tree.png");
    ui->label_pic->setPixmap(pix.scaled(60, 60, Qt::KeepAspectRatio));

    // Set image 2
    QPixmap pix2("C:/Users/Main User/Downloads/Rainforest/Pic2/Bird.png");
    ui->label_pic2->setPixmap(pix2.scaled(60, 60, Qt::KeepAspectRatio));
}

void MainWindow::displayAbtDialog() {
    QMessageBox::about(this, "About", "Created by Emma Wuysang\nGUI Assignment 6 - CIS17B");
}

MainWindow::~MainWindow()
{
    delete ui; // destructor
}

void MainWindow::onAddItemClicked()
{   // assigning the ui to the specific line name
    QString userID = ui->lineID->text();
    QString userDesc = ui->lineDesc->text();
    QString userLoc = ui->lineLoc->text();

    if (userID.isEmpty() || userDesc.isEmpty() || userLoc.isEmpty()) { // message box for empty fields
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    // appearance when added to list
    QString item = userID + " , " + userDesc + " , " + userLoc;
    ui->ItemList->addItem(item);


    ui->lineID->clear(); // cleanup for lines
    ui->lineDesc->clear();
    ui->lineLoc->clear();
}

void MainWindow::onFindItemClicked() //  when finditem is clicked
{
    QString searchByID = ui->lineFindID->text(); // connecting searchByID to the findID line
    for (int i = 0; i < ui->ItemList->count(); ++i) { //  ItemList is the list within the UI, for loop iterates through to select specific item
        QListWidgetItem* item = ui->ItemList->item(i);
        if (item->text().startsWith(searchByID)) {
            ui->ItemList->setCurrentItem(item);
            return;
        }
    }
    QMessageBox::information(this, "Not Found", "Item with ID " + searchByID + " not found."); // if the item cannot be found, or was invalid
}

void MainWindow::onRemoveItemClicked() // when remove is clicked
{
    QString removeByID = ui->lineRemoveID->text();
    for (int i = 0; i < ui->ItemList->count(); ++i) {
        QListWidgetItem* item = ui->ItemList->item(i);
        if (item->text().startsWith(removeByID)) {
            delete ui->ItemList->takeItem(i); // removes item from list built-in function
            return;
        }
    }
    QMessageBox::warning(this, "Not Found", "No item with ID " + removeByID + " found.");
}

