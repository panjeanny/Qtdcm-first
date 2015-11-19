#include "qtdcm_vorlage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qtdcm_vorlage w;
    w.show();

    return a.exec();
}
