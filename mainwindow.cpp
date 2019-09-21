#include "eventrow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  EventRow * row1 = new EventRow(ui->listEvents);
  QListWidgetItem * item = new QListWidgetItem(ui->listEvents);
  item->setSizeHint(row1->size());
  ui->listEvents->addItem(item);
  ui->listEvents->setItemWidget(item, row1);

}

MainWindow::~MainWindow()
{
  delete ui;
}
