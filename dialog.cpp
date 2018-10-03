#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    addressRequest = new QNetworkAccessManager;
    connect(addressRequest, &QNetworkAccessManager::finished,
            this, &Dialog::getAddressFinished);
    connect(ui->buscarBtn, &QPushButton::clicked,
            this, &Dialog::getAddress);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::getAddressFinished(QNetworkReply *reply)
{
    QByteArray bytes = reply->readAll();
    QXmlStreamReader xml;
    xml.addData(bytes);

    while(!xml.atEnd())
    {
        if (xml.isStartElement())
        {
            QString name = xml.name().toString();

            if (name == "uf")
            {
                QString uf = xml.readElementText();
                ui->uf->setText("<b>"+uf+"</b>");
            }
            if (name == "cidade")
            {
                QString cidade = xml.readElementText();
                ui->cidade->setText("<b>"+cidade+"</b>");
            }
            if (name == "bairro")
            {
                QString bairro = xml.readElementText();
                ui->bairro->setText("<b>"+bairro+"</b>");
            }
            if (name == "tipo_logradouro")
            {
                QString tipoLogradouro = xml.readElementText();
                ui->tipoLogradouro->setText("<b>"+tipoLogradouro+"</b>");
            }
            if (name == "logradouro")
            {
                QString logradouro = xml.readElementText();
                ui->logradouro->setText("<b>"+logradouro+"</b>");
            }
            if (name == "resultado_txt")
            {
                QString resultado = xml.readElementText();
                ui->resultado->setText("<b>"+resultado+"</b>");
            }
        } // if (xml.isStart

        xml.readNext();
    } // while (!xml.at

    if (xml.hasError())
    {
        QMessageBox::warning(this, tr("Erro"), tr("Erro ao carregar XML"));
        return;
    }
}

void Dialog::getAddress()
{
    QString cep = ui->lineEdit->text();

    QNetworkRequest request;
    request.setUrl(QUrl("http://cep.republicavirtual.com.br/web_cep.php?cep="
                        + cep + "&formato=xm"));
    addressRequest->get(request);
}
