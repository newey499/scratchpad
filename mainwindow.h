#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QCloseEvent>
#include <QMainWindow>
#include <QMessageBox>
#include <QSettings>

#include "globals.h"
#include "frmmain.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    FrmMain *frmMain;

public slots:

    void quitApplication();

protected:

    virtual void saveSettings();

    /**
    \brief called by QT when request is made to exit the application
      ***************/
    virtual void closeEvent(QCloseEvent *event);

    /**
    \brief Message Box that asks for confirmation of application exit
      ******************/
    virtual int quitYesNo();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
