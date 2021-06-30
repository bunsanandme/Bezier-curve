#include "graph.h"
#include "ui_graph.h"
#include <iostream>
#include <QSettings>

using namespace std;

void func(){


}
graph::graph(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::graph)
{
    ui->setupUi(this);
    setupGraph();

    QSettings conf( "const.conf", QSettings::IniFormat);

    X_MIN = conf.value("X_MIN").toDouble();
    X_MAX = conf.value("X_MAX").toDouble();
    STEP_SIZE = conf.value("STEP_SIZE").toDouble();
    POINTS_NUMBER = conf.value("POINTS_NUMBER").toInt();


}

void graph::setupGraph()
{
    ui->widget->clearGraphs();
    ui->widget->addGraph();
    ui->widget->xAxis->setRange(X_MIN, X_MAX);
    ui->widget->yAxis->setRange(X_MIN, X_MAX);
    ui->widget->replot();
}

graph::~graph()
{
    delete ui;
}

void graph::on_pushButton_clicked()
{


    double x0 = ui->spinBox->value();
    double x1 = ui->spinBox_3->value();
    double x2 = ui->spinBox_6->value();
    double y0 = ui->spinBox_2->value();
    double y1 = ui->spinBox_4->value();
    double y2 = ui->spinBox_5->value();

    QVector<double> x(POINTS_NUMBER), y(POINTS_NUMBER); //Массивы координат точек

    //Вычисляем наши данные
    int i=0;
    for (double X=0; X<=1; X+=STEP_SIZE)//Пробегаем по всем точкам
    {
        x[i] = x0*(1-X)*(1-X)+2*X*x1*(1-X)+X*X*x2;
        y[i] = y0*(1-X)*(1-X)+2*X*y1*(1-X)+X*X*y2;
        i++;
    }

    ui->widget->clearGraphs();//Если нужно, но очищаем все графики
    //Добавляем один график в widget
    ui->widget->addGraph();
    //Говорим, что отрисовать нужно график по нашим двум массивам x и y
    ui->widget->graph(0)->setData(x, y);

    //Подписываем оси Ox и Oy
    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("y");

    //Установим область, которая будет показываться на графике
    ui->widget->xAxis->setRange(X_MIN, X_MAX);//Для оси Ox

    //Для показа границ по оси Oy сложнее, так как надо по правильному
    //вычислить минимальное и максимальное значение в векторах
    ui->widget->yAxis->setRange(X_MIN, X_MAX);//Для оси Oy

    //И перерисуем график на нашем widget
    ui->widget->replot();
}

