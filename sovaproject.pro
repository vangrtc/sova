#-------------------------------------------------
#
# Project created by QtCreator 2013-03-09T21:16:29
#
#-------------------------------------------------

QT       += core gui
 QT += opengl
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wopengl.cpp \
    gamecycle.cpp

HEADERS  += mainwindow.h \
    wopengl.h \
    gamecycle.h

FORMS    += mainwindow.ui
