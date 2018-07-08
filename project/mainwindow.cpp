#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fileworker.h"
#include "getaddressforsave.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit_2->setReadOnly(true);
}

string MainWindow::address = "";

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

void MainWindow::on_actionSave_triggered()
{
    this->hide();
    getAddressForSave savescene;
    savescene.setModal(true);
    savescene.exec();
    this->show();
    if(address == "-1")
        return;
    FileWorker file = FileWorker();
    if(file.writeInFile(address, std::string(ui->textEdit->toPlainText().toUtf8().data())))
        QMessageBox::information(this, "saving proccess", "saved!");
    else
        QMessageBox::information(this, "saving proccess", "an error occoured!");
}

void MainWindow::on_actionOpen_triggered()
{
    this->hide();
    getAddressForSave savescene;
    savescene.setModal(true);
    savescene.exec();
    this->show();
    if(address == "-1")
        return;
    FileWorker file = FileWorker();
    QString myString = QString::fromUtf8(file.readFromFile(address).c_str());
    if(myString == "Unable to open file"){
        QMessageBox::information(this, "saving proccess", "File doesn't exist!");
        return;
    }
    QMessageBox::StandardButton rely = QMessageBox::warning(this,"Warning", "YOU WILL LOST YOUR CURRENT DATA. CONTINUE?", QMessageBox::Yes | QMessageBox::No);
    if(rely == QMessageBox::Yes){
        ui->textEdit->setText(myString);
    }
}
