QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


#linux
unix{
LIBS += -L/opt/opencv4-pc/lib -lopencv_world \
-lSeetaFaceDetector \
-lSeetaFaceLandmarker \
-lSeetaFaceRecognizer \
-lSeetaFaceTracker \
-lSeetaNet \
-lSeetaQualityAssessor \

INCLUDEPATH += /opt/opencv4-pc/include/opencv4
INCLUDEPATH += /opt/opencv4-pc/include/opencv4/opencv2
INCLUDEPATH += /opt/opencv4-pc/include
INCLUDEPATH += /opt/opencv4-pc/include/seeta
}



# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    faceattence.cpp

HEADERS += \
    faceattence.h

FORMS += \
    faceattence.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
