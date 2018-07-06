/********************************************************************************
** Form generated from reading UI file 'managetasks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGETASKS_H
#define UI_MANAGETASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_managetasks
{
public:
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *managetasks)
    {
        if (managetasks->objectName().isEmpty())
            managetasks->setObjectName(QStringLiteral("managetasks"));
        managetasks->resize(819, 522);
        pushButton_2 = new QPushButton(managetasks);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 407, 71, 71));
        lineEdit = new QLineEdit(managetasks);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 50, 471, 61));
        pushButton = new QPushButton(managetasks);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(690, 310, 71, 71));

        retranslateUi(managetasks);

        QMetaObject::connectSlotsByName(managetasks);
    } // setupUi

    void retranslateUi(QDialog *managetasks)
    {
        managetasks->setWindowTitle(QApplication::translate("managetasks", "Dialog", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class managetasks: public Ui_managetasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGETASKS_H
