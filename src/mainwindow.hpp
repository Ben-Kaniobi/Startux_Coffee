#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
     void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_Start_clicked();

private:
    Ui::MainWindow *ui;
    bool isInitialized;
    bool event(QEvent *event);
};

#endif // MAINWINDOW_HPP
