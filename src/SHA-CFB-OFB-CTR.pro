TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

CONFIG += release

# remove possible other optimization flags
QMAKE_CXXFLAGS_RELEASE -= -O
QMAKE_CXXFLAGS_RELEASE -= -O1
QMAKE_CXXFLAGS_RELEASE -= -O2

# add the desired -O3 if not present
QMAKE_CXXFLAGS_RELEASE *= -O3 -march=native
QMAKE_CFLAGS_RELEASE   += -O3


SOURCES += main.cpp \
    sha1.cpp \
    hash.cpp \
    sha3.cpp \
    fileencryption.cpp \
    md5.cpp \
    hashcfb.cpp \
    hashofb.cpp \
    hashctr.cpp

HEADERS += \
    sha1.h \
    hash.h \
    sha3.h \
    fileencryption.h \
    tests.h \
    md5.h \
    hashcfb.h \
    hashofb.h \
    hashctr.h

