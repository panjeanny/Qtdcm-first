#include "qtdcm_vorlage.h"
#include "ui_qtdcm_vorlage.h"

Qtdcm_vorlage::Qtdcm_vorlage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Qtdcm_vorlage)
{
    ui->setupUi(this);
}

Qtdcm_vorlage::~Qtdcm_vorlage()
{
    delete ui;
}
