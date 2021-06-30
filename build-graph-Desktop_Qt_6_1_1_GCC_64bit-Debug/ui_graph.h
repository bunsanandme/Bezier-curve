/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_graph
{
public:
    QWidget *centralwidget;
    QCustomPlot *widget;
    QSpinBox *spinBox;
    QLabel *label;
    QSpinBox *spinBox_2;
    QLabel *label_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QSpinBox *spinBox_5;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox_6;

    void setupUi(QMainWindow *graph)
    {
        if (graph->objectName().isEmpty())
            graph->setObjectName(QString::fromUtf8("graph"));
        graph->resize(1175, 600);
        centralwidget = new QWidget(graph);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 801, 581));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(880, 40, 51, 31));
        spinBox->setMinimum(-99);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(850, 40, 31, 31));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(1050, 40, 51, 31));
        spinBox_2->setMinimum(-99);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1020, 40, 31, 31));
        label_2->setFont(font);
        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(880, 100, 51, 31));
        spinBox_3->setMinimum(-99);
        spinBox_4 = new QSpinBox(centralwidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(1050, 100, 51, 31));
        spinBox_4->setMinimum(-99);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(850, 100, 31, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1020, 100, 31, 31));
        label_4->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(930, 240, 111, 51));
        spinBox_5 = new QSpinBox(centralwidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(1050, 160, 51, 31));
        spinBox_5->setMinimum(-99);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(850, 160, 31, 31));
        label_5->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1020, 160, 31, 31));
        label_6->setFont(font);
        spinBox_6 = new QSpinBox(centralwidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(880, 160, 51, 31));
        spinBox_6->setMinimum(-99);
        graph->setCentralWidget(centralwidget);

        retranslateUi(graph);

        QMetaObject::connectSlotsByName(graph);
    } // setupUi

    void retranslateUi(QMainWindow *graph)
    {
        graph->setWindowTitle(QCoreApplication::translate("graph", "graph", nullptr));
        label->setText(QCoreApplication::translate("graph", "x\342\202\200", nullptr));
        label_2->setText(QCoreApplication::translate("graph", "y\342\202\200", nullptr));
        label_3->setText(QCoreApplication::translate("graph", "x\342\202\201", nullptr));
        label_4->setText(QCoreApplication::translate("graph", "y\342\202\201", nullptr));
        pushButton->setText(QCoreApplication::translate("graph", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("graph", "x\342\202\202", nullptr));
        label_6->setText(QCoreApplication::translate("graph", "y\342\202\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graph: public Ui_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
