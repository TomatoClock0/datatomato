#include "tomatoclock.h"
#include "ui_tomatoclock.h"
#include "addtasks.h"
#include "managetasks.h"
#include "qstring.h"
#include <QTimer>
#include <QMessageBox>
//#include <QtCore>
#include <QSqlQuery>
#include <QString>
#include <QDebug>

static int workTime = 30;
//int relaxTime=5;

TomatoClock::TomatoClock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TomatoClock)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myslot()));
    ui->Start->setStyleSheet(tr("background-image: url(images/plays.jpg);"));
    ui->Stop->setStyleSheet(tr("background-image: url(images/stops.jpg);"));
    ui->Finish->setStyleSheet(tr("background-image: url(images/oks.jpg);"));
    ui->Delete->setStyleSheet(tr("background-image: url(images/deletes.jpg);"));
    ui->Clear->setStyleSheet(tr("background-image: url(images/clears.jpg);"));
    ui->Add->setStyleSheet(tr("background-image: url(images/add.jpg);"));
    ui->Done->setStyleSheet(tr("background-image: url(images/oks.jpg);"));
    ui->Manage->setStyleSheet(tr("background-image: url(images/manages.jpg);"));
    todoShow();
    completeShow();


}

TomatoClock::~TomatoClock()
{
    delete ui;
}

//add tasks
void TomatoClock::on_Add_clicked()
{
    AddTasks *addtasks=new AddTasks;
    addtasks->show();
}

//manage tasks
void TomatoClock::on_Manage_clicked()
{
    managetasks *manage = new managetasks;
    manage->show();
}

//the work/relax time has been setted already
void TomatoClock::on_Done_clicked()
{
    const int w = ui->work_time->text().toInt();
    //const int r=ui->relax_time->text().toInt();
    workTime = w ;
    ui->clock->setText(QString::number(w));
}

//start to time
void TomatoClock::on_Start_clicked()
{


    int num;

    num = workTime*1000;

    timer->start(num);


}

void TomatoClock::myslot()
{
    QMessageBox::warning(this, "timer", QObject::trUtf8("时间到!"));
    timer->stop();

}

void TomatoClock::completeShow()
{
    QSqlQuery query;
    bool success = query.exec("select *from information");
    if (success)
    {
        qDebug()<<"yes";
        query.next();
        while(query.value(3).toString() != '0'){
            if (query.next() == NULL){
                return ;
            }
        }
        ui->lineEdit->setText(query.value(1).toString());
    }
}

void TomatoClock::todoShow()
{

    QSqlQuery query;
    bool success = query.exec("select *from information");
    if (success)
    {
        //qDebug()<<"yes";
        query.next();
        while(query.value(3).toString() != '1'){
            if(query.next() == NULL){
                return ;
            }
        }
        ui->lineEdit_2->setText(query.value(1).toString());
        ui->textEdit->setText(query.value(2).toString());

    }
}





