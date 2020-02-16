#include "simplesearch.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    simplesearch w;
    w.show();

    return a.exec();
}
