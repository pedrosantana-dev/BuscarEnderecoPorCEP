/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *buscarBtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *resultado;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *tipoLogradouro;
    QLabel *label_4;
    QLabel *logradouro;
    QLabel *label_5;
    QLabel *bairro;
    QLabel *label_6;
    QLabel *cidade;
    QLabel *label_7;
    QLabel *uf;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(299, 242);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        buscarBtn = new QPushButton(Dialog);
        buscarBtn->setObjectName(QStringLiteral("buscarBtn"));
        buscarBtn->setFlat(false);

        horizontalLayout->addWidget(buscarBtn);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        resultado = new QLabel(groupBox);
        resultado->setObjectName(QStringLiteral("resultado"));
        resultado->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultado);


        verticalLayout_2->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        tipoLogradouro = new QLabel(groupBox);
        tipoLogradouro->setObjectName(QStringLiteral("tipoLogradouro"));

        formLayout->setWidget(0, QFormLayout::FieldRole, tipoLogradouro);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        logradouro = new QLabel(groupBox);
        logradouro->setObjectName(QStringLiteral("logradouro"));

        formLayout->setWidget(1, QFormLayout::FieldRole, logradouro);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        bairro = new QLabel(groupBox);
        bairro->setObjectName(QStringLiteral("bairro"));

        formLayout->setWidget(2, QFormLayout::FieldRole, bairro);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        cidade = new QLabel(groupBox);
        cidade->setObjectName(QStringLiteral("cidade"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cidade);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        uf = new QLabel(groupBox);
        uf->setObjectName(QStringLiteral("uf"));

        formLayout->setWidget(4, QFormLayout::FieldRole, uf);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addWidget(groupBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);

        buscarBtn->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Buscar Endere\303\247o por CEP - by Pedro Santana", 0));
        label->setText(QApplication::translate("Dialog", "&CEP:", 0));
        buscarBtn->setText(QApplication::translate("Dialog", "Buscar CEP", 0));
        groupBox->setTitle(QApplication::translate("Dialog", " Endere\303\247o ", 0));
        label_2->setText(QApplication::translate("Dialog", "Resultado da Busca:", 0));
        resultado->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Tipo de Logradouro:", 0));
        tipoLogradouro->setText(QString());
        label_4->setText(QApplication::translate("Dialog", "Logradouro:", 0));
        logradouro->setText(QString());
        label_5->setText(QApplication::translate("Dialog", "Bairro:", 0));
        bairro->setText(QString());
        label_6->setText(QApplication::translate("Dialog", "Cidade:", 0));
        cidade->setText(QString());
        label_7->setText(QApplication::translate("Dialog", "UF:", 0));
        uf->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
