#include "eventrow.h"

#include <QHBoxLayout>

EventRow::EventRow(QString name, bool enable, QWidget *parent) : QWidget(parent)
{
  QHBoxLayout *layoutRow1 = new QHBoxLayout( this );
  layoutRow1->setMargin( 5 );

  m_edtName = new QTextEdit (name, this);
  layoutRow1->addWidget(m_edtName);

  m_lblSummary = new QLabel("summary", this);
  layoutRow1->addWidget(m_lblSummary);

  m_btnEnable = new QPushButton ("Enable", this);
  m_btnEnable->setCheckable(true);
  m_btnEnable->setChecked(enable);
  layoutRow1->addWidget(m_btnEnable);


}

EventRow::EventRow(QWidget *parent) : EventRow("text", false, parent)
{

}
