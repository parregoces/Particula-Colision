#ifndef PARTICLE_H
#define PARTICLE_H

#include <QGraphicsEllipseItem>
#include <QPointF>

class Particle : public QGraphicsEllipseItem {
public:
    Particle(qreal x, qreal y, qreal radius, const QPointF& initialVelocity);
    QPointF velocity;
};

#endif // PARTICLE_H
