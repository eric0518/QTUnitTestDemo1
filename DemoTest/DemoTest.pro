#-------------------------------------------------
#
# Project created by QtCreator 2018-07-29T19:00:13
#
#-------------------------------------------------

QT       += testlib
QT       -= gui

TARGET = DemoTest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    cdirectortest.cpp \
    csingertest.cpp \
    ctestrunner.cpp
include(../Demo/Demo.pri)

DEFINES += QT_DEPRECATED_WARNINGS
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    cdirectortest.h \
    csingertest.h \
    ctestrunner.h
