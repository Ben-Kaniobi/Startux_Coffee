#include <QApplication>
#include <QCloseEvent>

#include "mainwindow.hpp"
#include "ui_mainwindow.h"

#include "hwhelper.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{

}

void MainWindow::closeEvent(QCloseEvent *event)
{
    /* LED cleanup */
    Unexport_LED();

    event->accept();
}
