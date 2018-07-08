#include "getaddressforsave.h"
#include "ui_getaddressforsave.h"

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
