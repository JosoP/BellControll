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

  void showEditPart(bool show);

private slots:
  void on_btnEdit_clicked();

  void on_btnSave_clicked();

private:
  Ui::EventRow *ui;
};

#endif // EVENTROW_H
