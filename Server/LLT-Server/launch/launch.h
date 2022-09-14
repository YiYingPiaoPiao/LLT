#ifndef LAUNCH_H
#define LAUNCH_H

// 网络相关
#include <QTcpServer>
#include <QTcpSocket>

// 数据库相关
#include <QSqlDatabase>

// 主界面
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class launch; }
QT_END_NAMESPACE

class launch : public QMainWindow
{
    Q_OBJECT

public:
    launch(QWidget *parent = nullptr);
    ~launch();

private:
    Ui::launch *ui;

public slots:

signals:

};
#endif // LAUNCH_H
