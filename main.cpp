#include "header.h"

int main(int argc, char *argv[])
{

  //test();

    QApplication a(argc, argv);
    MainWindow w;
    w.setMinimumHeight(540);
    w.setMaximumHeight(540);
    w.setMinimumWidth(790);
    w.setMaximumWidth(790);
    w.show();
    return a.exec();
}
