#include "helper.h"

 #include <QPainter>
 #include <QPaintEvent>
 #include <QWidget>
#include <QThread>

 Helper::Helper()
 {
     QLinearGradient gradient(QPointF(50, -20), QPointF(80, 20));
     gradient.setColorAt(0.0, Qt::white);
     gradient.setColorAt(1.0, QColor(0xa6, 0xce, 0x39));

     background = QBrush(QColor(0, 0, 0)); //thay doi mau nen
     circleBrush = QBrush(gradient);
     circlePen = QPen(Qt::black);
     circlePen.setWidth(1);
     textPen = QPen(Qt::white);
     textFont.setPixelSize(50);
 }

 void Helper::paint(QPainter *painter, QPaintEvent *event, int elapsed)
 {
     painter->fillRect(event->rect(), background);


     //painter->save();

     QThread::msleep(5000);
     painter->fillRect(event->rect(), QBrush(QColor(255, 255, 255)));

 }
