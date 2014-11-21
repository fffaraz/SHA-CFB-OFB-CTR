#-------------------------------------------------
#
# Project created by QtCreator 2014-11-21T09:40:22
#
#-------------------------------------------------

QT       += core
QT       -= gui

TARGET = SHA-CFB-OFB-CTR
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    shacfb.cpp \
    shaofb.cpp \
    shactr.cpp \
    shacipher.cpp

HEADERS += \
    shacfb.h \
    shaofb.h \
    shactr.h \
    shacipher.h
