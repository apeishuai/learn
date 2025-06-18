/********************************************************************************
** Form generated from reading UI file 'downloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADDIALOG_H
#define UI_DOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *urlLineEdit;
    QListWidget *urlListWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addUrlButton;
    QPushButton *removeUrlButton;
    QPushButton *clearUrlsButton;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DownloadDialog)
    {
        if (DownloadDialog->objectName().isEmpty())
            DownloadDialog->setObjectName("DownloadDialog");
        DownloadDialog->resize(489, 333);
        verticalLayout_5 = new QVBoxLayout(DownloadDialog);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        urlLineEdit = new QLineEdit(DownloadDialog);
        urlLineEdit->setObjectName("urlLineEdit");

        verticalLayout_3->addWidget(urlLineEdit);

        urlListWidget = new QListWidget(DownloadDialog);
        urlListWidget->setObjectName("urlListWidget");

        verticalLayout_3->addWidget(urlListWidget);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        addUrlButton = new QPushButton(DownloadDialog);
        addUrlButton->setObjectName("addUrlButton");

        verticalLayout_4->addWidget(addUrlButton);

        removeUrlButton = new QPushButton(DownloadDialog);
        removeUrlButton->setObjectName("removeUrlButton");
        removeUrlButton->setEnabled(false);

        verticalLayout_4->addWidget(removeUrlButton);

        clearUrlsButton = new QPushButton(DownloadDialog);
        clearUrlsButton->setObjectName("clearUrlsButton");

        verticalLayout_4->addWidget(clearUrlsButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(DownloadDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(DownloadDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DownloadDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DownloadDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadDialog)
    {
        DownloadDialog->setWindowTitle(QCoreApplication::translate("DownloadDialog", "Dialog", nullptr));
        addUrlButton->setText(QCoreApplication::translate("DownloadDialog", "Add URL", nullptr));
        removeUrlButton->setText(QCoreApplication::translate("DownloadDialog", "Remove URL", nullptr));
        clearUrlsButton->setText(QCoreApplication::translate("DownloadDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadDialog: public Ui_DownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADDIALOG_H
