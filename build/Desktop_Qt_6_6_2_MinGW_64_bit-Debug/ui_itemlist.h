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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemList
{
public:
    QGridLayout *gridLayout;
    QListWidget *itemView;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;

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
        gridLayout = new QGridLayout(ItemList);
        gridLayout->setObjectName("gridLayout");
        itemView = new QListWidget(ItemList);
        itemView->setObjectName("itemView");

        gridLayout->addWidget(itemView, 1, 0, 1, 4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ItemList);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addButton = new QPushButton(ItemList);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(25, 25));
        addButton->setMaximumSize(QSize(25, 20));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        addButton->setFont(font1);
        addButton->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(ItemList);
        deleteButton->setObjectName("deleteButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);
        deleteButton->setMinimumSize(QSize(25, 25));
        deleteButton->setMaximumSize(QSize(25, 25));
        deleteButton->setFont(font1);

        horizontalLayout->addWidget(deleteButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 4);

        clearButton = new QPushButton(ItemList);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(20, 0));
        clearButton->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(clearButton, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 3);


        retranslateUi(ItemList);

        QMetaObject::connectSlotsByName(ItemList);
    } // setupUi

    void retranslateUi(QWidget *ItemList)
    {
        ItemList->setWindowTitle(QCoreApplication::translate("ItemList", "Cart", nullptr));
        label->setText(QCoreApplication::translate("ItemList", "Items", nullptr));
        addButton->setText(QCoreApplication::translate("ItemList", "+", nullptr));
        deleteButton->setText(QCoreApplication::translate("ItemList", "-", nullptr));
        clearButton->setText(QCoreApplication::translate("ItemList", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemList: public Ui_ItemList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMLIST_H
