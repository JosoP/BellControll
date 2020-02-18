#ifndef EVENTROWITEM_H
#define EVENTROWITEM_H

#include "eventrow.h"

#include <QListWidgetItem>

class EventRowItem : public QListWidgetItem
{
private:
  EventRow * rowLayout;
public:
  EventRowItem(QListWidget * parent = nullptr, int type = Type);
  ~EventRowItem();

private slots:
  void layout_docked();
  void layout_undocked();
};

#endif // EVENTROWITEM_H
