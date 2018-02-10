#ifndef SYSTEMUSAGEANALYZER_H
#define SYSTEMUSAGEANALYZER_H

#include <QMainWindow>

namespace Ui {
class SystemUsageAnalyzer;
}

class SystemUsageAnalyzer : public QMainWindow
{
    Q_OBJECT

public:
    explicit SystemUsageAnalyzer(QWidget *parent = 0);
    ~SystemUsageAnalyzer();

private:
    Ui::SystemUsageAnalyzer *ui;
};

#endif // SYSTEMUSAGEANALYZER_H
