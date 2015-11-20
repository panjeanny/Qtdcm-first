#-------------------------------------------------
#
# Project created by QtCreator 2015-11-19T21:52:17
#
#-------------------------------------------------

QT       += core gui\
            widgets\
            network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qtdcm_Main_Widget
TEMPLATE = app


SOURCES += main.cpp\
        qtdcm.cpp \
    QtDcmManager.cpp

HEADERS  += qtdcm.h \
    QtDcmManager.h

FORMS    += qtdcm.ui \
    qtdcmpreferencesdialog.ui \
    qtdcmDcm2niiSettingsWidget.ui \
    qtdcmpreferenceswidget.ui \
    qtdcmLocalDicomSettingsWidget.ui \
    qtdcmServersDicomSettingsWidget.ui \
    qtdcmPreviewWidget.ui \
    qtdcmSerieInfoWidget.ui \
    qtdcmImportWidget.ui

INCLUDEPATH += /home/panjeanny/Documents/dcmtk_lib/include

LIBS += /home/panjeanny/Documents/dcmtk_lib/lib/libdcmdata.a
LIBS += /home/panjeanny/Documents/dcmtk_lib/lib/liboflog.a
LIBS += /home/panjeanny/Documents/dcmtk_lib/lib/libofstd.a
