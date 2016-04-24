#include "wordwidget.h"
#include "managerdb.h"
#include <QApplication>
int main(int argc,char **argv)
{
    QApplication app(argc,argv);
    WordWidget w;

    return app.exec();
}
