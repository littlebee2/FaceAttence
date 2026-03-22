#ifndef FACEATTENCE_H
#define FACEATTENCE_H

#include <QMainWindow>

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

private:
    Ui::FaceAttence *ui;
};
#endif // FACEATTENCE_H
