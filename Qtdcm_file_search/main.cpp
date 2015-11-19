#include "qtdcm_fiel_search.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qtdcm_fiel_search w;
    w.show();

    return a.exec();
}
