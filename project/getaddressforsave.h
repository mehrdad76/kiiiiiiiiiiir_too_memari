#ifndef GETADDRESSFORSAVE_H
#define GETADDRESSFORSAVE_H

#include <QDialog>

namespace Ui {
class getAddressForSave;
}

class getAddressForSave : public QDialog
{
    Q_OBJECT

public:
    explicit getAddressForSave(QWidget *parent = 0);
    ~getAddressForSave();

private:
    Ui::getAddressForSave *ui;
};

#endif // GETADDRESSFORSAVE_H
