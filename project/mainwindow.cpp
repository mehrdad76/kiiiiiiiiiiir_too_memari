#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit_2->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    for (int i = 1; i < 40; i++)
    {
        ui->textEdit_2->setText(ui->textEdit_2->toPlainText() + i + "\n");
    }
}

void MainWindow::on_actionNew_triggered()
{
    QMessageBox::StandardButton rely = QMessageBox::warning(this,"Warning", "YOU WILL LOST YOUR CURRENT DATA. CONTINUE?", QMessageBox::Yes | QMessageBox::No);
    if(rely == QMessageBox::Yes){
        ui->textEdit->clear();
    }
}
