#include "qtdcm_file_search.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qtdcm_file_search w;
    w.show();

    return a.exec();
}
