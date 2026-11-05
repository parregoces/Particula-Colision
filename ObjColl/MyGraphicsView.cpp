#include "MyGraphicsView.h"

#include <QTimer>

MyGraphicsView::MyGraphicsView(QWidget *parent)
    : QGraphicsView(parent)
{
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,600,530);
    setScene(scene);

    // Create a particle

    QPointF initialVelocity(2.0, -1.5);
    particle = new Particle(0, 0, 20,initialVelocity);
    scene->addItem(particle);

}

void MyGraphicsView::startParticleMovement()
{
    // Start a timer to move the particle
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, [this]() {
        // Move the particle to the right
        particle->setPos(particle->x() + particle->velocity.x(), particle->y()+particle->velocity.y());
        qDebug() << sceneRect().width() << particle ->x();
        if (particle->pos().x() < 0 || particle->pos().x() > sceneRect().width() - particle->rect().width()) {
            particle->velocity.setX(-particle->velocity.x());

        }
        if (particle->pos().y() < 0 || particle->pos().y() > sceneRect().height() - particle->rect().height()) {
            particle->velocity.setY(-particle->velocity.y());
            qDebug() << "Button clicked!";
        }
    });
    timer->start(20); // Adjust the interval as needed for smooth movement
}
