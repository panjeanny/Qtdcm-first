#include "qtdcmwidget.h"
#include "ui_qtdcmwidget.h"

QtdcmWidget::QtdcmWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtdcmWidget)
{
    ui->setupUi(this);
}

QtdcmWidget::~QtdcmWidget()
{
    delete ui;
}
