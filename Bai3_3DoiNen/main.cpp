#include "window.h"
#include <QApplication>
#include <QSurfaceFormat>
#include <QDebug>
#include <QElapsedTimer>

  int main(int argc, char *argv[])
  {   QElapsedTimer timer;
      timer.start();

      QApplication app(argc, argv);

      QSurfaceFormat fmt;
      fmt.setSamples(5);
      QSurfaceFormat::setDefaultFormat(fmt);

      Window window;
      window.show();
      qDebug() << timer.elapsed();
      return app.exec();
  }

