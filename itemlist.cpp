#include "itemlist.h"
#include "ui_itemlist.h"

ItemList::ItemList(QWidget *parent, const QSqlDatabase& DBConnection, int userID)
    : QWidget(parent)
    , ui(new Ui::ItemList)
{
    // Initialize Members
    ui->setupUi(this);
    this->DBConnection = DBConnection;
    this->userID = userID;
}

ItemList::~ItemList()
{
    delete ui;
}
