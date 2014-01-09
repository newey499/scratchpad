#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QDialog>

namespace Ui {
class FrmMain;
}

class FrmMain : public QDialog
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = 0);
    ~FrmMain();

private:
    Ui::FrmMain *ui;
};

#endif // FRMMAIN_H
