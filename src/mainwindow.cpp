#include <mainwindow.hpp>

MainWindow::MainWindow(QWidget* parent /*= nullptr*/,
                       Qt::WindowFlags flags /*= {}*/)
    : QMainWindow(parent, flags) {
  setWindowTitle(tr("Graphviz"));
}

#include "moc_mainwindow.cpp"