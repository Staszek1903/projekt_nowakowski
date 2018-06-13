TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    display.cpp \
    vector2f.cpp \
    textdisplay.cpp \
    graphicaldisplay.cpp \
    Circle.cpp \
    Shape.cpp \
    triangle.cpp \
    parallelogram.cpp

HEADERS += \
    display.h \
    vector2f.h \
    textdisplay.h \
    graphicaldisplay.h \
    Circle.h \
    Shape.h \
    triangle.h \
    parallelogram.h
