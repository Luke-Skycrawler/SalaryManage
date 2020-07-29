QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    additionaldays.cpp \
    addpeople.cpp \
    databaseserver.cpp \
    kinds.cpp \
    loginform.cpp \
    main.cpp \
    mainwindow.cpp \
    model.cpp \
    modifypeople.cpp \
    salarydetail.cpp \
    workdays.cpp \
    workerquery.cpp

HEADERS += \
    additionaldays.h \
    addpeople.h \
    databaseserver.h \
    kinds.h \
    loginform.h \
    mainwindow.h \
    model.h \
    modifypeople.h \
    salarydetail.h \
    workdays.h \
    workerquery.h

FORMS += \
    additionaldays.ui \
    addpeople.ui \
    kinds.ui \
    mainwindow.ui \
    modifypeople.ui \
    workdays.ui \
    workerquery.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
