#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogapropos.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionA_propos, SIGNAL(triggered()),this, SLOT(apropos()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::apropos()
{
    Dialogapropos *dial = new Dialogapropos(this);
    dial->show();
}
