#include "systemusageanalyzer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    SystemUsageAnalyzer w;
    w.show();

    return app.exec();
}

