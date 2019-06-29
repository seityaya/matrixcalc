TARGET   = matrixcalc
TEMPLATE = app

SOURCES += $$PWD$$/*.cpp

HEADERS += $$PWD$$/*.h

FORMS   += $$PWD$$/*.ui




QT += core
QT += gui
QT += widgets

QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -unused-variable
