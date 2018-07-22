#include "verif.h"

#include<iostream>
#include <QApplication>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Verif w;
   int c;


   c=w.piocheMot();
    w.on_monButton_clicked();
    w.show();
    return a.exec();
}
