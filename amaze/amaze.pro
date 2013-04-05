#-------------------------------------------------
#
# Project created by QtCreator 2013-04-05T06:43:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = amaze
TEMPLATE = app


SOURCES += main.cpp\
        MazeWindow.cpp \
    alg/KissAlgorithm.cpp

HEADERS  += MazeWindow.h \
    util/MazeNode.h \
    util/MazeMap.h \
    util/PathAlgorithm.h \
    alg/KissAlgorithm.h

FORMS    += MazeWindow.ui
