#include "rt_pointer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    rt_pointer w;
    w.show();

    return a.exec();
}
