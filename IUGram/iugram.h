#ifndef IUGRAM_H
#define IUGRAM_H

#include <QMainWindow>
#include <QtAlgorithms>
#include <QString>
#include <QLinkedList>
#include <QMultiMap>
#include <QPair>
#include <QVector>
#include <QMessageBox>

// Для post() и get() запросов
//#include <QNetworkAccessManager>
//#include <QNetworkRequest>
//#include <QNetworkReply>
//#include <QUrl>

static QLinkedList<QPair<QString, QString>> list_of_users;
static QString ip_address;
static QString port;
static bool bad_log = false;

namespace Ui {
class IUGram;
}

class IUGram : public QMainWindow
{
    Q_OBJECT

public:
    explicit IUGram(QWidget *parent = 0);
    ~IUGram();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_2_returnPressed();

    void on_lineEdit_returnPressed();

private:
    Ui::IUGram *ui;
};

#endif // IUGRAM_H
