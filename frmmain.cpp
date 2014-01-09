#include "frmmain.h"
#include "ui_frmmain.h"

FrmMain::FrmMain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmMain)
{
    ui->setupUi(this);
}

FrmMain::~FrmMain()
{
    delete ui;
}


void FrmMain::slotExit()
{
    emit closeApp();
}



void FrmMain::slotExec()
{
    qDebug("Exec");

    QString str("wxyz");
    display(str);

    return;
}


void FrmMain::display(QString &str)
{
    string s = str.toStdString();

    qDebug("%s","abcd");
    qDebug("length %d", str.length ());

    cout << "ABCD" << endl;
    cout << s << endl;
    qDebug("string [%s]", s.data());
    qDebug("QString [%s]", str.toStdString().data());
    qDebug("toAscii [%s]", toAscii(str));

    return;
}


const char * FrmMain::toAscii(QString &str)
{
    return str.toStdString().data();
}
