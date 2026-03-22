#ifndef FACEATTENCE_H
#define FACEATTENCE_H

#include <QMainWindow>
#include <opencv.hpp>
#include <QTcpSocket>
#include <QTimer>


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

    //定时器事件
    void timerEvent(QTimerEvent *e);

private slots:
    void timer_connect();
    void stop_connect();
    void start_connect();
    
private:
    Ui::FaceAttence *ui;

    //摄像头
    VideoCapture cap;

    //hear - 级联分类器对象
    cv::CascadeClassifier cascade;

    //创建网络套接字，定时器
    QTcpSocket msocket;
    QTimer mtimer;
};
#endif // FACEATTENCE_H
