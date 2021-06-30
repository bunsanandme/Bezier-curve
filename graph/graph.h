#ifndef GRAPH_H
#define GRAPH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class graph; }
QT_END_NAMESPACE

class graph : public QMainWindow
{
    Q_OBJECT

public:
    graph(QWidget *parent = nullptr);
    void setupGraph();
    ~graph();

private:
    Ui::graph *ui;
    double X_MIN;
    double X_MAX;
    double STEP_SIZE;
    int POINTS_NUMBER;

private slots:

    void on_pushButton_clicked();
};
#endif // GRAPH_H
