#ifndef ITEMLIST_H
#define ITEMLIST_H

#include <QWidget>
#include <QtSql/QSql>
#include <QSqlDatabase>
#include "additemdialog.h"
#include "qlistwidget.h"

namespace Ui {
class ItemList;
}

class ItemList : public QWidget
{
    Q_OBJECT

public:
    explicit ItemList(QWidget *parent, const QSqlDatabase DBConnection, QString username);
    ~ItemList();

private:
    Ui::ItemList *ui;
    const QSqlDatabase DBConnection;
    const QString username;
    QList<int> itemID;
    int itemSelected;
    bool deletable;

signals:
    void refreshList();

private slots:
    void onRefresh();

    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_itemView_itemClicked(QListWidgetItem *item);
    void on_clearButton_clicked();
};

#endif // ITEMLIST_H
