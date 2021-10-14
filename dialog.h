#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class QNetworkAccessManager;
class QNetworkReply;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QNetworkAccessManager *addressRequest;
    QString texto;

private slots:
    void getAddressFinished(QNetworkReply *reply);
    void getAddress();
};

#endif // DIALOG_H
