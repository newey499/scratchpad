#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QChar>
#include <QDialog>
#include <QString>

#include <string>
#include <iostream>
using namespace std;

namespace Ui {
class FrmMain;
}

class FrmMain : public QDialog
{
    Q_OBJECT

public:
    explicit FrmMain(QWidget *parent = 0);
    ~FrmMain();

public slots:

    void slotExec();
    void slotExit();

signals:

    void closeApp();

protected:

    void display(QString &str);
    const char * toAscii(QString &str);

private:
    Ui::FrmMain *ui;
};

#endif // FRMMAIN_H
