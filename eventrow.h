#ifndef EVENTROW_H
#define EVENTROW_H

#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QWidget>

class EventRow : public QWidget
{
  Q_OBJECT

private:
  QTextEdit *   m_edtName;
  QPushButton * m_btnEnable;
  QLabel *      m_lblSummary;

public:
  explicit EventRow(QString name, bool enable, QWidget *parent = nullptr);
  explicit EventRow(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // EVENTROW_H
