#include "QtMyDialogApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtMyDialogApp w;
    w.show();
    return a.exec();
}
