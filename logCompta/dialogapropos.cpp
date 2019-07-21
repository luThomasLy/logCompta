#include "dialogapropos.h"
#include "ui_dialogapropos.h"
#include "QDialog"

Dialogapropos::Dialogapropos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogapropos)
{
    ui->setupUi(this);
    connect(ui->pushButtonQuitter, SIGNAL(clicked()), this, SLOT(quitter()));
}

Dialogapropos::~Dialogapropos()
{
    delete ui;
}

void Dialogapropos::quitter()
{
    close();
}
