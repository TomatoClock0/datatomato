/********************************************************************************
** Form generated from reading UI file 'addtasks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKS_H
#define UI_ADDTASKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddTasks
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddTasks)
    {
        if (AddTasks->objectName().isEmpty())
            AddTasks->setObjectName(QStringLiteral("AddTasks"));
        AddTasks->resize(633, 469);
        lineEdit = new QLineEdit(AddTasks);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 10, 491, 21));
        label = new QLabel(AddTasks);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 72, 15));
        label_2 = new QLabel(AddTasks);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 72, 15));
        textEdit = new QTextEdit(AddTasks);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 50, 491, 341));
        pushButton = new QPushButton(AddTasks);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 410, 93, 28));
        pushButton_2 = new QPushButton(AddTasks);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 410, 93, 28));

        retranslateUi(AddTasks);

        QMetaObject::connectSlotsByName(AddTasks);
    } // setupUi

    void retranslateUi(QDialog *AddTasks)
    {
        AddTasks->setWindowTitle(QApplication::translate("AddTasks", "Dialog", nullptr));
        label->setText(QApplication::translate("AddTasks", "name", nullptr));
        label_2->setText(QApplication::translate("AddTasks", "details", nullptr));
        pushButton->setText(QApplication::translate("AddTasks", "ok", nullptr));
        pushButton_2->setText(QApplication::translate("AddTasks", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTasks: public Ui_AddTasks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKS_H
