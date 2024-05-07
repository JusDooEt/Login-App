/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *title_label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *username_label;
    QLabel *password_label;
    QVBoxLayout *verticalLayout;
    QLineEdit *username_lineEdit;
    QLineEdit *password_lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *register_pushButton;
    QPushButton *login_pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(446, 369);
        LoginWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgba(3, 0, 38,150);\n"
"	font: \"Yu Gothic UI Semibold\";\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"	color: rgb(85, 255, 255);\n"
"	border: 2px solid white;\n"
"	border-radius: 10px;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	border-style: outset;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	border-width: 2px;\n"
"	border-style: solid;\n"
"	border-radius: 6px;\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QPushButton:Disabled\n"
"{\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-radius: 6px;\n"
"	border-color: rgb(181, 181, 181);\n"
"	\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border: 4px solid white;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 150);\n"
"	border: 5px solid white;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QDoubleSpinBox\n"
"{\n"
"	border"
                        ": 3px solid white;\n"
"	border-radius: 8px;\n"
"	background-color: rgba(3, 0, 38,100);\n"
"}\n"
"QSpinBox\n"
"{\n"
"	border: 3px solid white;\n"
"	border-radius: 8px;\n"
"	background-color: rgba(3, 0, 38,100);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	border: 2px solid white;\n"
"	border-radius: 8px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"	border: 2px solid white;\n"
"	border-radius: 8px;\n"
"	border-style: outset;\n"
"	\n"
"	background-color: rgba(3, 0, 38,150)\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"	border: 2px solid rgb(255, 255, 255);\n"
"	border-radius: px;\n"
"	background-color: rgb(255, 255, 255);\n"
"	width: 10px;\n"
"	margin: 1px;\n"
"\n"
"\n"
"}\n"
"\n"
"QListWidget::item\n"
"{\n"
"	color: rgb(85, 255, 255);\n"
"}"));
        gridLayout = new QGridLayout(LoginWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 142, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Ignored);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(122, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        title_label = new QLabel(LoginWidget);
        title_label->setObjectName("title_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Uighur")});
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(title_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        username_label = new QLabel(LoginWidget);
        username_label->setObjectName("username_label");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        username_label->setFont(font1);

        verticalLayout_2->addWidget(username_label);

        password_label = new QLabel(LoginWidget);
        password_label->setObjectName("password_label");
        password_label->setFont(font1);

        verticalLayout_2->addWidget(password_label);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        username_lineEdit = new QLineEdit(LoginWidget);
        username_lineEdit->setObjectName("username_lineEdit");

        verticalLayout->addWidget(username_lineEdit);

        password_lineEdit = new QLineEdit(LoginWidget);
        password_lineEdit->setObjectName("password_lineEdit");
        password_lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password_lineEdit);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        register_pushButton = new QPushButton(LoginWidget);
        register_pushButton->setObjectName("register_pushButton");

        horizontalLayout_2->addWidget(register_pushButton);

        login_pushButton = new QPushButton(LoginWidget);
        login_pushButton->setObjectName("login_pushButton");

        horizontalLayout_2->addWidget(login_pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(121, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 141, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "LoginWidget", nullptr));
        title_label->setText(QCoreApplication::translate("LoginWidget", "MANIFEST", nullptr));
        username_label->setText(QCoreApplication::translate("LoginWidget", "Username:", nullptr));
        password_label->setText(QCoreApplication::translate("LoginWidget", "Password: ", nullptr));
        register_pushButton->setText(QCoreApplication::translate("LoginWidget", "Register", nullptr));
        login_pushButton->setText(QCoreApplication::translate("LoginWidget", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
