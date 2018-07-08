#include "getaddressforsave.h"
#include "ui_getaddressforsave.h"
#include "mainwindow.h"

using namespace std;

getAddressForSave::getAddressForSave(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getAddressForSave)
{
    ui->setupUi(this);
}

getAddressForSave::~getAddressForSave()
{
    delete ui;
}

void getAddressForSave::on_buttonBox_accepted()
{
    MainWindow::address = std::string(ui->textEdit->toPlainText().toUtf8().data());
    ui->textEdit->clear();
    this->hide();
}

void getAddressForSave::on_buttonBox_rejected()
{
    MainWindow::address = "-1";
    ui->textEdit->clear();
    this->hide();
}

void getAddressForSave::on_getAddressForSave_accepted()
{

}
