#include <QApplication>
#include <csignal>
#include "mainwindow.hpp"
#include "hwhelper.hpp"

/* Prototypes */
void setShutDownSignal( int signalId );
void handleShutDownSignal( int signalId );

int main(int argc, char *argv[])
{
    /* LED init */
    LED_Init();
    Clear_LED1();
    Clear_LED2();
    Clear_LED3();
    Clear_LED4();
    BTN_Init();

    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();

    setShutDownSignal( SIGINT  );   /* shut down on ctrl-c */
    setShutDownSignal( SIGTERM );   /* shut down on killall */

    return a.exec();
}


void setShutDownSignal( int signalId )
{
    struct sigaction sa;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);
    sa.sa_handler = handleShutDownSignal;
    if (sigaction(signalId, &sa, NULL) == -1)
    {
        //perror("setting up termination signal");
        exit(1);
    }
}


void handleShutDownSignal( int /*signalId*/ )
{
    /* LED cleanup */
    Unexport_LED();
    Unexport_BTN();

    QApplication::exit(0);
}
