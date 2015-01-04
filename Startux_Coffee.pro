#-------------------------------------------------
#
# Project created by QtCreator 2015-01-04T17:10:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Startux_Coffee
TEMPLATE = app


SOURCES += src/main.cpp\
        src/mainwindow.cpp

HEADERS  += src/mainwindow.h

FORMS    += layout/mainwindow.ui


# Auto-uploading and -running on the BBB-BFH-Cape
INCLUDEPATH += /opt/crosstools/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/arm-linux-gnueabihf/libc/usr/include
INCLUDEPATH += /opt/embedded/bbb/rootfs/usr/include
INCLUDEPATH += /opt/embedded/bbb/rootfs/usr/local/include

LIBS += -L/opt/embedded/bbb/rootfs/lib
LIBS += -L/opt/embedded/bbb/rootfs/usr/lib
LIBS += -L/opt/embedded/bbb/rootfs/usr/local/lib

LIBS += -L/opt/embedded/bbb/rootfs/usr/local/qt-5.3/lib -lz -lpthread -lm -lqwt -lQt5Gui -lGLES_CM -lGLESv2 -lusc

target.path = /usr/local/bin
INSTALLS += target
