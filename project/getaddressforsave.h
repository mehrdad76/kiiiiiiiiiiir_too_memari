#ifndef GETADDRESSFORSAVE_H
#define GETADDRESSFORSAVE_H


#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class getAddressForSave;
}

class getAddressForSave : public QDialog
{
    Q_OBJECT

public:
    explicit getAddressForSave(QWidget *parent = 0);
    ~getAddressForSave();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_getAddressForSave_accepted();

private:
    Ui::getAddressForSave *ui;
};

#endif // GETADDRESSFORSAVE_H
