#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QPushButton>
#include "Particle.h"


class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    MyGraphicsView(QWidget *parent = nullptr);

public slots:
    void startParticleMovement();

private:
    QGraphicsScene *scene;
    Particle *particle;

};

#endif // MYGRAPHICSVIEW_H
