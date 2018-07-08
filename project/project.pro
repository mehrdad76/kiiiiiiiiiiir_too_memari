#-------------------------------------------------
#
# Project created by QtCreator 2018-07-06T00:57:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    fileworker.cpp \
    getaddressforsave.cpp

HEADERS  += mainwindow.h \
    fileworker.h \
    getaddressforsave.h

FORMS    += mainwindow.ui \
    getaddressforsave.ui
