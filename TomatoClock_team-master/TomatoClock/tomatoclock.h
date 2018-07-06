#ifndef TOMATOCLOCK_H
#define TOMATOCLOCK_H

#include <QMainWindow>

namespace Ui {
class TomatoClock;
}

class TomatoClock : public QMainWindow
{
    Q_OBJECT

public:
    explicit TomatoClock(QWidget *parent = 0);
    ~TomatoClock();

private slots:

    void on_Add_clicked();

    void on_Manage_clicked();

    void on_Done_clicked();

    void on_Start_clicked();

    void myslot();

    void completeShow();

    void todoShow();

private:
    Ui::TomatoClock *ui;
    QTimer *timer;
};

#endif // TOMATOCLOCK_H
