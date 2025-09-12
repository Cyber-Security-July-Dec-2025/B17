#include <QApplication>
#include "MainWindow.h"

int main(int argc, char** argv) {
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(780, 520);
    w.show();
    return a.exec();
}
