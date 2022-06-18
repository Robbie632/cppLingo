#include <QApplication>
#include <QWidget>
#include <iostream>
#include "gui.cpp"

int main(int argc, char *argv[]) {
    
    QApplication app(argc, argv);

    GUI gui;

    QWidget window;

    window.resize(250, 150);
    window.setWindowTitle("Simple example");
    window.show();

    return app.exec();

    return 0;
}



