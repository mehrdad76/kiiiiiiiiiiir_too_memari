#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QDesktopWidget dw;
    int x=dw.width()*0.5;
    int y=dw.height()*0.7;
    w.setFixedSize(x,y);
    w.show();

    return a.exec();
}
