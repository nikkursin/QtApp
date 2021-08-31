#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Login");
    w.setFixedSize(250, 220);
    w.setWindowIcon(QIcon("app_icon.ico"));
    w.show();
    return a.exec();
}
