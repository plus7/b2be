# -------------------------------------------------
# Project created by QtCreator 2010-06-01T21:55:52
# -------------------------------------------------
QT += network \
    sql \
    xml
TARGET = b2be
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    db.cpp \
    threaddb.cpp \
    boarddb.cpp \
    bbsmenudb.cpp
HEADERS += mainwindow.h \
    db.h \
    threaddb.h \
    boarddb.h \
    bbsmenudb.h
FORMS += mainwindow.ui
