#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "getaddressforsave.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static string address;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionExit_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
