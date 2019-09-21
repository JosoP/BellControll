#include "eventrow.h"
#include "ui_eventrow.h"

EventRow::EventRow(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::EventRow)
{
  ui->setupUi(this);
}

EventRow::~EventRow()
{
  delete ui;
}
