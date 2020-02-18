#include "eventrow.h"
#include "eventrowitem.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);


  EventRowItem * item = new EventRowItem(ui->listEvents);
  ui->listEvents->addItem(item);

  EventRow * row2 = new EventRow(ui->listEvents);
  QListWidgetItem * item2 = new QListWidgetItem(ui->listEvents);
  item2->setSizeHint(row2->size());
  ui->listEvents->addItem(item2);
  ui->listEvents->setItemWidget(item2, row2);

}

MainWindow::~MainWindow()
{
  delete ui;
}
