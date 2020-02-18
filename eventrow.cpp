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

void EventRow::showEditPart(bool show)
{
  if(show){
//    ui->lblNameForm->show();
//    ui->edtName->show();
//    ui->lblTime->show();
//    ui->time->show();
//    ui->lblWeekDays->show();
    ui->dockWidget->show();
  } else {
//    ui->lblNameForm->hide();
//    ui->edtName->hide();
//    ui->lblTime->hide();
//    ui->time->hide();
//    ui->lblWeekDays->hide();
    ui->dockWidget->hide();
  }


}

void EventRow::on_btnEdit_clicked()
{
    this->showEditPart(true);
}

void EventRow::on_btnSave_clicked()
{
    this->showEditPart(false);
}
