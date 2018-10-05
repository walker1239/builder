#-------------------------------------------------
#
# Project created by QtCreator 2018-09-21T17:11:49
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = builder
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    comida_criolla.cpp \
    Entrada.cpp \
    principal.cpp \
    bebida.cpp \
    postre.cpp \
    builder.cpp \
    comida_arequipena.cpp \
    comida_criolla.cpp \
    director.cpp \
    comida.cpp

HEADERS += \
        mainwindow.h \
    comida_criolla.h \
    Entrada.h \
    principal.h \
    bebida.h \
    postre.h \
    builder.h \
    comida_arequipena.h \
    comida_criolla.h \
    comida_arequipena.h \
    director.h \
    comida.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
