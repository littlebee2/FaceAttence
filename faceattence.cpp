#include "faceattence.h"
#include "ui_faceattence.h"
#include <QDebug>
FaceAttence::FaceAttence(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttence)
{
    ui->setupUi(this);

    //打开摄像头
    cap.open(0);//dev/video

    //打开定时器
    startTimer(100);

    //导入级联分类器文件
    cascade.load("/home/danneil/opencv/opencv/data/haarcascades/haarcascade_frontalface_alt2.xml");

    //QTcpSocket当断开连接的时候会disconnected()信号，连接成功会connected()信号，连接失败会error()信号
     connect(&msocket,&QTcpSocket::connected,this,&FaceAttence::stop_connect);
     connect(&msocket,&QTcpSocket::disconnected,this,&FaceAttence::start_connect);
    //  connect(&msocket,&QTcpSocket::error,this,&FaceAttence::error_connect);

    //定时器连接服务器
    connect(&mtimer,&QTimer::timeout,this,&FaceAttence::timer_connect);
    //启动定时器
    mtimer.start(5000);//每隔5秒连接一次服务器,连接成功就不再连接
}

FaceAttence::~FaceAttence()
{
    delete ui;
}

void FaceAttence::timerEvent(QTimerEvent *e)
{
    //采集图像
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage);//读取一帧图像
    }

    Mat grayImage;
    cvtColor(srcImage,grayImage,COLOR_BGR2GRAY);//转化为灰

    //检测人脸数据
    /*
        待检测图片
        存储人脸数据的容器
        每次缩放的比例
        每个人脸至少被检测到3次才算是真的人脸
        0
        最小人脸尺寸
    */
    std::vector<Rect> facesRects;
    cascade.detectMultiScale(grayImage,facesRects,1.1,3,0,Size(30,30));
    if(facesRects.size() > 0)//如果检测到人脸
    {
        Rect faceRect = facesRects[0];//取第一个人脸数据
        // rectangle(srcImage,faceRect,Scalar(0,255,0),2);//画

        //移动人脸框(图片-QLable)
        ui->headpicLb->move(faceRect.x,faceRect.y);
    }
    else
    {
        //没检测到人脸，qlab放在中间
        ui->headpicLb->move(100,60);
    }


    if(srcImage.data == nullptr)
        return;
    //将opencv(BGR)转化为qt(rgb)格式
    cvtColor(srcImage,srcImage,COLOR_BGR2RGB);
    //
    QImage image(srcImage.data,srcImage.cols,srcImage.rows,srcImage.step1(),QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(image);
    ui->vdieoLb->setPixmap(mmp);
}


void FaceAttence::timer_connect()
{
    msocket.connectToHost("192.168.239.1",9999);
    qDebug() << "正在连接服务器...";
}

void FaceAttence::stop_connect()
{
    mtimer.stop();
    qDebug() << "连接成功，停止定时器";
}

void FaceAttence::start_connect()
{
    mtimer.start(5000);
    qDebug() << "连接断开，重新启动定时器";
}
