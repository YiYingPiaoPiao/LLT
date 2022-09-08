#ifndef LAUNCH_H
#define LAUNCH_H

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
};
#endif // LAUNCH_H
