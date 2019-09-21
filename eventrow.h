#ifndef EVENTROW_H
#define EVENTROW_H

#include <QWidget>

namespace Ui {
class EventRow;
}

class EventRow : public QWidget
{
  Q_OBJECT

public:
  explicit EventRow(QWidget *parent = nullptr);
  ~EventRow();

private:
  Ui::EventRow *ui;
};

#endif // EVENTROW_H
