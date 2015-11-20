#include "qtdcm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qtdcm w;
    w.show();

    return a.exec();
}
