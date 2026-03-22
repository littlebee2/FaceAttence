#ifndef FACEATTENCE_H
#define FACEATTENCE_H

#include <QMainWindow>
#include <opencv.hpp>

using namespace cv;
QT_BEGIN_NAMESPACE
namespace Ui {
class FaceAttence;
}
QT_END_NAMESPACE

class FaceAttence : public QMainWindow
{
    Q_OBJECT

public:
    FaceAttence(QWidget *parent = nullptr);
    ~FaceAttence();

    //timer event
    void timerEvent(QTimerEvent *e);

private:
    Ui::FaceAttence *ui;

    //shexiangtou
    VideoCapture cap;
};
#endif // FACEATTENCE_H
