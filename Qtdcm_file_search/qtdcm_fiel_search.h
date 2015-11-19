#ifndef QTDCM_FIEL_SEARCH_H
#define QTDCM_FIEL_SEARCH_H

#include <QMainWindow>

namespace Ui {
class Qtdcm_fiel_search;
}

class Qtdcm_fiel_search : public QMainWindow
{
    Q_OBJECT

public:
    explicit Qtdcm_fiel_search(QWidget *parent = 0);
    ~Qtdcm_fiel_search();

private:
    Ui::Qtdcm_fiel_search *ui;
};

#endif // QTDCM_FIEL_SEARCH_H
