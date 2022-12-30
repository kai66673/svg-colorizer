#include "main_window.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
  ads::CDockManager::setConfigFlag(ads::CDockManager::FocusHighlighting, true);
  m_DockManager = new ads::CDockManager(this);

  QLabel *l1 = new QLabel();
  l1->setWordWrap(true);
  l1->setAlignment(Qt::AlignTop | Qt::AlignLeft);
  l1->setText("Lorem ipsum dolor sit amet, consectetuer adipiscing elit. ");

  ads::CDockWidget *d1 = new ads::CDockWidget("Label 1");
  d1->setWidget(l1);

  QLabel *l2 = new QLabel();
  l2->setWordWrap(true);
  l2->setAlignment(Qt::AlignTop | Qt::AlignLeft);
  l2->setText("Lorem ipsum dolor sit amet, consectetuer adipiscing elit. ");

  ads::CDockWidget *d2 = new ads::CDockWidget("Label 2");
  d2->setWidget(l2);

  QLabel *l3 = new QLabel();
  l3->setText("Alex was here");

  ads::CDockWidget *d3 = new ads::CDockWidget("Label 3");
  d3->setWidget(l3);

  m_DockManager->addDockWidget(ads::TopDockWidgetArea, d1);
  m_DockManager->addDockWidget(ads::TopDockWidgetArea, d2);
  m_DockManager->addDockWidget(ads::LeftDockWidgetArea, d3);
}

MainWindow::~MainWindow() {}
