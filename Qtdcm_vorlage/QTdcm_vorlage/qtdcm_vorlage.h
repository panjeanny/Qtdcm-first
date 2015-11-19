#ifndef QTDCM_VORLAGE_H
#define QTDCM_VORLAGE_H

#include <QMainWindow>

namespace Ui {
class Qtdcm_vorlage;
}

class Qtdcm_vorlage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Qtdcm_vorlage(QWidget *parent = 0);
    ~Qtdcm_vorlage();

private:
    Ui::Qtdcm_vorlage *ui;
};

#endif // QTDCM_VORLAGE_H
