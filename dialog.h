#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QXmlStreamReader>

namespace Ui {
class Dialog;
}

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
