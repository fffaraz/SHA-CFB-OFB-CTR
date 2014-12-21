#-------------------------------------------------
#
# Project created by QtCreator 2014-11-21T09:40:22
#
#-------------------------------------------------

TEMPLATE = app
QT     += core
QT     -= gui
CONFIG += console
CONFIG -= app_bundle
CONFIG += c++11

TARGET  = shacipher

SOURCES += main.cpp \
    shacfb.cpp \
    shaofb.cpp \
    shactr.cpp \
    shacipher.cpp \
    filecipher.cpp

HEADERS += \
    shacfb.h \
    shaofb.h \
    shactr.h \
    shacipher.h \
    filecipher.h
