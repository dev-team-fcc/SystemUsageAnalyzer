#include "systemusageanalyzer.h"
#include "ui_systemusageanalyzer.h"

SystemUsageAnalyzer::SystemUsageAnalyzer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SystemUsageAnalyzer)
{
    ui->setupUi(this);
}

SystemUsageAnalyzer::~SystemUsageAnalyzer()
{
    delete ui;
}
