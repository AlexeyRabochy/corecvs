# try use global config
exists(../../../../config.pri) {
    ROOT_DIR=../../../..
    #message(Using global config)
    ROOT_DIR=$$PWD/$$ROOT_DIR
    include($$ROOT_DIR/config.pri)
} else {
    message(Using local config)
    ROOT_DIR=../..
    ROOT_DIR=$$PWD/$$ROOT_DIR
    include($$ROOT_DIR/cvs-config.pri)
}


TEMPLATE = app
TARGET   = generator
QT      += core xml
QT      -= gui
CONFIG  += console
CONFIG  -= app_bundle
CONFIG  += debug

OBJECTS_DIR = $$ROOT_DIR/.obj/generator$$BUILD_CFG_NAME
MOC_DIR  = $$OBJECTS_DIR
#UI_DIR  = $$OBJECTS_DIR
#RCC_DIR = $$OBJECTS_DIR

include(../../core/core.pri)

SOURCES += \
    main.cpp \
#    example.cpp \
    pdoGenerator.cpp \
    widgetUIGenerator.cpp \
    documentationGenerator.cpp \
    baseGenerator.cpp \
#    qSettingsVisitors.cpp \
    parametersMapperGenerator.cpp \
    configLoader.cpp

HEADERS += \
    reflectionGenerator.h \
#    example.h \
    pdoGenerator.h \
    widgetUIGenerator.h \
    documentationGenerator.h \
    baseGenerator.h \
#    qSettingsVisitors.h \
    parametersMapperGenerator.h \
    configLoader.h

#SOURCES += Generated/Example.cpp
#HEADERS += Generated/Example.h
