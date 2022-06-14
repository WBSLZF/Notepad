#include "notepad.h"
#include "./ui_notepad.h"

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Notepad)//实例化ui
{
    ui->setupUi(this);//把ui和本类关联起来，ui中的时间什么的就可以发送到本类
    //当actionNew的信号triggered被触发时，也就是别惦记是，槽onActionNewTriggered会被调用
    this->connect(ui->actionNew,//sender
                  SIGNAL(triggered(bool)),//sender信号
                  this,//recevier
                  SLOT(onActionNewTriggered(bool)));//recevier的槽


}

Notepad::~Notepad()
{
    delete ui;
}

