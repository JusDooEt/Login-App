/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *registerLabel;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QLabel *passLabel;
    QLabel *confirmPassLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usernameLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *confirmPassLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *userVerifyLabel;
    QLabel *verifyEmailLabel;
    QLabel *passVerifyLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *registerButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName("RegisterDialog");
        RegisterDialog->resize(309, 377);
        verticalLayout_4 = new QVBoxLayout(RegisterDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        registerLabel = new QLabel(RegisterDialog);
        registerLabel->setObjectName("registerLabel");
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        registerLabel->setFont(font);
        registerLabel->setLayoutDirection(Qt::LeftToRight);
        registerLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(registerLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        nameLabel = new QLabel(RegisterDialog);
        nameLabel->setObjectName("nameLabel");
        QFont font1;
        font1.setPointSize(10);
        nameLabel->setFont(font1);
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(nameLabel);

        emailLabel = new QLabel(RegisterDialog);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setFont(font1);
        emailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(emailLabel);

        passLabel = new QLabel(RegisterDialog);
        passLabel->setObjectName("passLabel");
        passLabel->setFont(font1);
        passLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(passLabel);

        confirmPassLabel = new QLabel(RegisterDialog);
        confirmPassLabel->setObjectName("confirmPassLabel");
        confirmPassLabel->setFont(font1);
        confirmPassLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(confirmPassLabel);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        usernameLineEdit = new QLineEdit(RegisterDialog);
        usernameLineEdit->setObjectName("usernameLineEdit");

        verticalLayout_2->addWidget(usernameLineEdit);

        emailLineEdit = new QLineEdit(RegisterDialog);
        emailLineEdit->setObjectName("emailLineEdit");

        verticalLayout_2->addWidget(emailLineEdit);

        passwordLineEdit = new QLineEdit(RegisterDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        QFont font2;
        font2.setStrikeOut(false);
        font2.setKerning(false);
        passwordLineEdit->setFont(font2);
        passwordLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_2->addWidget(passwordLineEdit);

        confirmPassLineEdit = new QLineEdit(RegisterDialog);
        confirmPassLineEdit->setObjectName("confirmPassLineEdit");
        confirmPassLineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_2->addWidget(confirmPassLineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        userVerifyLabel = new QLabel(RegisterDialog);
        userVerifyLabel->setObjectName("userVerifyLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userVerifyLabel->sizePolicy().hasHeightForWidth());
        userVerifyLabel->setSizePolicy(sizePolicy);
        userVerifyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(userVerifyLabel);

        verifyEmailLabel = new QLabel(RegisterDialog);
        verifyEmailLabel->setObjectName("verifyEmailLabel");
        sizePolicy.setHeightForWidth(verifyEmailLabel->sizePolicy().hasHeightForWidth());
        verifyEmailLabel->setSizePolicy(sizePolicy);
        verifyEmailLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(verifyEmailLabel);

        passVerifyLabel = new QLabel(RegisterDialog);
        passVerifyLabel->setObjectName("passVerifyLabel");
        sizePolicy.setHeightForWidth(passVerifyLabel->sizePolicy().hasHeightForWidth());
        passVerifyLabel->setSizePolicy(sizePolicy);
        passVerifyLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(passVerifyLabel);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(RegisterDialog);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        registerButton = new QPushButton(RegisterDialog);
        registerButton->setObjectName("registerButton");

        horizontalLayout->addWidget(registerButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Dialog", nullptr));
        registerLabel->setText(QCoreApplication::translate("RegisterDialog", "Register", nullptr));
        nameLabel->setText(QCoreApplication::translate("RegisterDialog", "Username: ", nullptr));
        emailLabel->setText(QCoreApplication::translate("RegisterDialog", "Email: ", nullptr));
        passLabel->setText(QCoreApplication::translate("RegisterDialog", "Password: ", nullptr));
        confirmPassLabel->setText(QCoreApplication::translate("RegisterDialog", "Confirm Password: ", nullptr));
        passwordLineEdit->setInputMask(QString());
        passwordLineEdit->setText(QString());
        userVerifyLabel->setText(QCoreApplication::translate("RegisterDialog", "Username not available", nullptr));
        verifyEmailLabel->setText(QCoreApplication::translate("RegisterDialog", "Valid Email", nullptr));
        passVerifyLabel->setText(QCoreApplication::translate("RegisterDialog", "Passwords do not match", nullptr));
        cancelButton->setText(QCoreApplication::translate("RegisterDialog", "Cancel", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterDialog", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
