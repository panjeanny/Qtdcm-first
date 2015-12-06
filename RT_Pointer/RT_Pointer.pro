#-------------------------------------------------
#
# Project created by QtCreator 2015-11-20T02:12:18
#
#-------------------------------------------------

QT       += core gui\
            network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RT_Pointer
TEMPLATE = app


SOURCES += main.cpp\
        rt_pointer.cpp \
    QtDcmManager.cpp \
    QtScmServer.cpp

HEADERS  += rt_pointer.h \
    QtDcmManager.h \
    QtDcmServer.h

FORMS    += rt_pointer.ui

RESOURCES += \
    resources/qtdcm.qrc


    #akh PC
#INCLUDEPATH += /Users/jeannnypan/Documents/dcmtk-library/include

#LIBS += /Users/jeannnypan/Documents/dcmtk-library/lib/libdcmdata.a
#LIBS += /Users/jeannnypan/Documents/dcmtk-library/lib/liboflog.a
#LIBS += /Users/jeannnypan/Documents/dcmtk-library/lib/libofstd.a


    #Kevinś PC
INCLUDEPATH +=/home/panjeanny/Documents/dcmtk_lib/include

LIBS += /home/panjeanny/Documents/dcmtk_lib/lib/libdcmdata.a
LIBS += /home/panjeanny/Documents/dcmtk_lib/lib/liboflog.a
LIBS += /home/panjeanny/Documents/dcmtk_lib/lib/libofstd.a





   # mein ubuntu auf jeannyś macbookpro
#INCLUDEPATH +=/home/jeannypan/Documents/dcmtk_lib/include

#LIBS += /home/jeannypan/Documents/dcmtk_lib/lib/libdcmdata.a
#LIBS += /home/jeannypan/Documents/dcmtk_lib/lib/liboflog.a
#LIBS += /home/jeannypan/Documents/dcmtk_lib/lib/libofstd.a
#LIBS += -ldcmdata\
 #       -loflog\
  #      -lofstd\


