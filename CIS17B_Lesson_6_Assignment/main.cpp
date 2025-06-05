/*
 * File:   main.cpp
 * Author: Emma Wuysang
 * Creator Notes: didnt use this portion all that much
 * Created on June 2, 2025 4:30 PM
 * Purpose: Develop a Simple Storage Management System using Ordered and Unordered Collections utilize a GUI
 */

#include "mainwindow.h"
#include <QApplication>

// note, did not really change much over here. also I included images for the design of the gui
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
