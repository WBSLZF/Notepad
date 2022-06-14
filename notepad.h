#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private:
    Ui::Notepad *ui;

signals://信号
    void opened();

public slots://公有槽定义区，可以关联其他类中的信号
    void onActionNewTrigggerd(bool checked);//新建
    void onActionOpenrigggerd(bool checked);//打开
    void onActionSaverigggerd(bool checked);//保存
    void onActionSaveasTrigggerd(bool checked);//另存为
    void onActionPasteTrigggerd(bool checked);//复制
    void onActionUndoTrigggerd(bool checked);//撤销
    void onActionRedoTrigggerd(bool checked);//重做


private slots://私有槽定义区，只能关联本类中的信息
    void onEdited();
};
#endif // NOTEPAD_H
