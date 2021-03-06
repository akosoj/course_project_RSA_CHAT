#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
