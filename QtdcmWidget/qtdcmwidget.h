#ifndef QTDCMWIDGET_H
#define QTDCMWIDGET_H

#include <QMainWindow>

namespace Ui {
class QtdcmWidget;
}

class QtdcmWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtdcmWidget(QWidget *parent = 0);
    ~QtdcmWidget();

private:
    Ui::QtdcmWidget *ui;
};

#endif // QTDCMWIDGET_H
