#-------------------------------------------------
#
# Project created by QtCreator 2011-11-07T00:58:14
#
#-------------------------------------------------

QT       += core gui network

TARGET = Tundra-host
TEMPLATE = app

SOURCES += main.cpp\
        tundrahost.cpp

HEADERS  += tundrahost.h

FORMS    += tundrahost.ui

unix:include(../qserialdevice/src/unix/ttylocker.pri)
include(../qserialdevice/src/qserialdeviceenumerator/qserialdeviceenumerator.pri)
include(../qserialdevice/src/qserialdevice/qserialdevice.pri)

win32 {
    LIBS += -lsetupapi -luuid -ladvapi32
}
unix:!macx {
    LIBS += -ludev
}

OTHER_FILES += \
    gfx/host.png \
    gfx/host.ico

RESOURCES += \
    gfx.qrc






