/********************************************************************************
** Form generated from reading UI file 'primecounter.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMECOUNTER_H
#define UI_PRIMECOUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PrimeCounter
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *labelInfo;
    QSpacerItem *verticalSpacer1;
    QHBoxLayout *horizontalLayout2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout1;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QLabel *labelFilter;
    QSpacerItem *verticalSpacer2;
    QHBoxLayout *horizontalLayout3;
    QSlider *horizontalSlider;
    QLabel *labelSize;
    QLabel *labelResult;

    void setupUi(QDialog *PrimeCounter)
    {
        if (PrimeCounter->objectName().isEmpty())
            PrimeCounter->setObjectName("PrimeCounter");
        PrimeCounter->setWindowModality(Qt::WindowModal);
        PrimeCounter->resize(454, 320);
        PrimeCounter->setAutoFillBackground(false);
        PrimeCounter->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(PrimeCounter);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        labelInfo = new QLabel(PrimeCounter);
        labelInfo->setObjectName("labelInfo");
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        labelInfo->setFont(font);
        labelInfo->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelInfo);

        verticalSpacer1 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer1);

        horizontalLayout2 = new QHBoxLayout();
        horizontalLayout2->setObjectName("horizontalLayout2");
        horizontalLayout2->setContentsMargins(-1, 10, -1, 10);
        comboBox = new QComboBox(PrimeCounter);
        comboBox->setObjectName("comboBox");

        horizontalLayout2->addWidget(comboBox);


        verticalLayout_4->addLayout(horizontalLayout2);

        horizontalLayout1 = new QHBoxLayout();
        horizontalLayout1->setObjectName("horizontalLayout1");
        horizontalLayout1->setContentsMargins(-1, 10, -1, 10);
        pushButton = new QPushButton(PrimeCounter);
        pushButton->setObjectName("pushButton");
        pushButton->setCheckable(true);

        horizontalLayout1->addWidget(pushButton);

        progressBar = new QProgressBar(PrimeCounter);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        horizontalLayout1->addWidget(progressBar);


        verticalLayout_4->addLayout(horizontalLayout1);

        labelFilter = new QLabel(PrimeCounter);
        labelFilter->setObjectName("labelFilter");

        verticalLayout_4->addWidget(labelFilter);

        verticalSpacer2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer2);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setObjectName("horizontalLayout3");
        horizontalSlider = new QSlider(PrimeCounter);
        horizontalSlider->setObjectName("horizontalSlider");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout3->addWidget(horizontalSlider);

        labelSize = new QLabel(PrimeCounter);
        labelSize->setObjectName("labelSize");
        labelSize->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelSize->setMargin(5);
        labelSize->setIndent(10);

        horizontalLayout3->addWidget(labelSize);


        verticalLayout_4->addLayout(horizontalLayout3);

        labelResult = new QLabel(PrimeCounter);
        labelResult->setObjectName("labelResult");

        verticalLayout_4->addWidget(labelResult);


        retranslateUi(PrimeCounter);

        QMetaObject::connectSlotsByName(PrimeCounter);
    } // setupUi

    void retranslateUi(QDialog *PrimeCounter)
    {
        PrimeCounter->setWindowTitle(QCoreApplication::translate("PrimeCounter", "Dialog", nullptr));
        labelInfo->setText(QCoreApplication::translate("PrimeCounter", "Select a reducing option and measure the speed", nullptr));
        pushButton->setText(QCoreApplication::translate("PrimeCounter", "Start", nullptr));
        labelFilter->setText(QCoreApplication::translate("PrimeCounter", "Filter Label", nullptr));
        labelSize->setText(QCoreApplication::translate("PrimeCounter", "size", nullptr));
        labelResult->setText(QCoreApplication::translate("PrimeCounter", "Result Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrimeCounter: public Ui_PrimeCounter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMECOUNTER_H
