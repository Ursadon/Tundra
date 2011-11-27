#include <QtGui/QApplication>
#include "tundrahost.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TundraHost w;
    w.show();

    return a.exec();
}
