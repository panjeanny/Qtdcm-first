#include "qtdcm_fiel_search.h"
#include "ui_qtdcm_fiel_search.h"

Qtdcm_fiel_search::Qtdcm_fiel_search(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Qtdcm_fiel_search)
{
    ui->setupUi(this);
}

Qtdcm_fiel_search::~Qtdcm_fiel_search()
{
    delete ui;
}
