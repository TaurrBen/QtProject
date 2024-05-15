#ifndef QTAUTOFOCUS_H
#define QTAUTOFOCUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QtAutoFocus;
}
QT_END_NAMESPACE

class QtAutoFocus : public QMainWindow
{
    Q_OBJECT

public:
    QtAutoFocus(QWidget *parent = nullptr);
    ~QtAutoFocus();

private:
    Ui::QtAutoFocus *ui;
};
#endif // QTAUTOFOCUS_H
