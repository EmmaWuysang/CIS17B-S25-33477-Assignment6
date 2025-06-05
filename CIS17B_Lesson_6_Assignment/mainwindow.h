#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// headers ^
#include <QMainWindow>
#include "StorageManager.h"

// some of these are qt defaulted
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr); // found the explicit fix online, its to prevent errors coming up when working with the null ptr
    ~MainWindow();

private slots: // private slots are for the specific buttons when clicked and with the connections
    void onAddItemClicked();
    void onFindItemClicked();
    void onRemoveItemClicked();
    void displayAbtDialog();

private:
    Ui::MainWindow *ui;
    StorageManager manager; // the instance
};

#endif // MAINWINDOW_H
