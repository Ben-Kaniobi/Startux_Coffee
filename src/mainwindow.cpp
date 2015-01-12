#include <QApplication>
#include <QCloseEvent>

#include "mainwindow.hpp"
#include "ui_mainwindow.h"

#include "unistd.h"
#include "hwhelper.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    isInitialized = false;
}

/* Init after UI visible */
bool MainWindow::event(QEvent *event)
{
    int returnValue = QWidget::event(event);

    if (event->type() == QEvent::WindowActivate)
    {
        if(!isInitialized)
        {
            bool btn_pressed = false;
            while(!btn_pressed)
            {
                btn_pressed = Get_BTN1();
            }

            this->ui->checkBox_Milch->setEnabled(true);
            this->ui->checkBox_Zucker->setEnabled(true);
            this->ui->pushButton_Start->setEnabled(true);
            this->ui->label_Meldung->hide();

            isInitialized = true;
        }
    }

    return returnValue;
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Start_clicked()
{
    /* Disable gui elements */
    this->ui->checkBox_Milch->setDisabled(true);
    this->ui->checkBox_Zucker->setDisabled(true);
    this->ui->pushButton_Start->setDisabled(true);
    /* Force GUI refresh to make changes visible */
    qApp->processEvents();

    /* Output: Coffee (takes 3s) */
    Set_LED2();
    usleep(3000*1000);
    Clear_LED2();

    if(this->ui->checkBox_Milch->isChecked())
    {
        /* Output: Milk (takes 2s) */
        Set_LED3();
        usleep(2000*1000);
        Clear_LED3();
    }

    if(this->ui->checkBox_Zucker->isChecked())
    {
        /* Output: Sugar (takes 0.5s) */
        Set_LED4();
        usleep(500*1000);
        Clear_LED4();
    }

    for(int i=1; i<=3; i++)
    {
        Set_LED1();
        usleep(500*1000);
        Clear_LED1();
        usleep(500*1000);
    }

    /* Enable gui elements */
    this->ui->checkBox_Milch->setDisabled(false);
    this->ui->checkBox_Zucker->setDisabled(false);
    this->ui->pushButton_Start->setDisabled(false);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    /* LED cleanup */
    Unexport_LED();
    Unexport_BTN();

    event->accept();
}
