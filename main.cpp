#include <QApplication>
#include <QPushButton>

/**
 * @brief hello
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char* argv[]) {
  QApplication app(argc, argv);

  QPushButton button("Hello world!");
  button.show();

  return app.exec();
}