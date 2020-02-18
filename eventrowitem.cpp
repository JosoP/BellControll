#include "eventrowitem.h"

EventRowItem::EventRowItem(QListWidget * parent, int type)
  : QListWidgetItem(parent, type)
{
  rowLayout = new EventRow(parent);
  parent->setItemWidget(this, rowLayout);
  this->setSizeHint(rowLayout->size());
}

EventRowItem::~EventRowItem()
{
  delete rowLayout;
}
