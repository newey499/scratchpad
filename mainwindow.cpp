#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSettings settings(Globals::ORGANIZATION_NAME, Globals::APPLICATION_NAME);
    restoreGeometry(settings.value("geometry").toByteArray());

    frmMain = new FrmMain();
    setCentralWidget(frmMain);

    connect(frmMain, SIGNAL(closeApp()),
            this, SLOT(quitApplication()));

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::saveSettings()
{
    QSettings settings(Globals::ORGANIZATION_NAME, Globals::APPLICATION_NAME);
    settings.setValue("geometry", saveGeometry());
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    int ret = quitYesNo();

    if (ret == QMessageBox::Yes)
    {
        saveSettings();
        event->accept();
    }
    else
    {
        event->ignore();
    }
}

int MainWindow::quitYesNo()
{
    int ret = QMessageBox::No;
    QString exit = QString("Exit ");
    QString appName = Globals::APPLICATION_NAME;

    exit = exit.append(appName);

    ret = QMessageBox::question(this,
                                "Scratchpad",
                                "Exit",
                                //tr(appName.toAscii().data()),
                                //tr(exit.toAscii().data()),
                                QMessageBox::Yes | QMessageBox::No,
                                QMessageBox::Yes);



    return ret;
}


void MainWindow::quitApplication()
{
    int ret = quitYesNo();
    if (ret == QMessageBox::Yes)
    {
        saveSettings();
        qApp->quit();
    }
}
