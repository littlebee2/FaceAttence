#include "faceattence.h"
#include "ui_faceattence.h"

FaceAttence::FaceAttence(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttence)
{
    ui->setupUi(this);

    //open
    cap.open(0);//dev/video

    //start timer
    startTimer(100);
}

FaceAttence::~FaceAttence()
{
    delete ui;
}

void FaceAttence::timerEvent(QTimerEvent *e)
{
    //caiji
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage);//read one frame
    }
    if(srcImage.data == nullptr)
        return;
    //take opencv(BGR) change qt(rgb)
    cvtColor(srcImage,srcImage,COLOR_BGR2RGB);
    QImage image(srcImage.data,srcImage.cols,srcImage.rows,srcImage.step1(),QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(image);
    ui->vdieoLb->setPixmap(mmp);
}
