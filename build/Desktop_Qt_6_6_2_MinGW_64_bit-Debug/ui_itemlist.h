/********************************************************************************
** Form generated from reading UI file 'itemlist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMLIST_H
#define UI_ITEMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemList
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ItemList)
    {
        if (ItemList->objectName().isEmpty())
            ItemList->setObjectName("ItemList");
        ItemList->resize(420, 350);
        ItemList->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"	border: 3px solid white;\n"
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
        verticalLayout = new QVBoxLayout(ItemList);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(ItemList);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(ItemList);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(ItemList);
        tableView->setObjectName("tableView");
        tableView->setShowGrid(true);

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(ItemList);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ItemList);

        QMetaObject::connectSlotsByName(ItemList);
    } // setupUi

    void retranslateUi(QWidget *ItemList)
    {
        ItemList->setWindowTitle(QCoreApplication::translate("ItemList", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ItemList", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ItemList", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ItemList", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemList: public Ui_ItemList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMLIST_H
