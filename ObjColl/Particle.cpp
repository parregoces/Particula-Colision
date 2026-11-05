#include "Particle.h"
#include <QBrush>

Particle::Particle(qreal x, qreal y, qreal radius, const QPointF& initialVelocity)
    : QGraphicsEllipseItem(x, y, radius, radius), velocity(initialVelocity) {
    setBrush(QBrush(Qt::red));
}
