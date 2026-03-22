#include "faceattence.h"
#include "ui_faceattence.h"

FaceAttence::FaceAttence(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FaceAttence)
{
    ui->setupUi(this);
}

FaceAttence::~FaceAttence()
{
    delete ui;
}
