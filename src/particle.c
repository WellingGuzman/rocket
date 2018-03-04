#include "particle.h"

Particle CreateParticle(double x, double y, double life, double angle, double speed)
{
    Particle *p = (Particle2 *)malloc(sizeof(Particle2));

    p->position.x = p->starting_point.x = x;
    p->position.y = p->starting_point.y = y;
    p->life = life;
    // p->angle = angle;
    // p->speed = speed;

    double angleInRadians = angle * PI / 180;

    p->velocity.x = speed * cos(angleInRadians);
    p->velocity.y = (-speed) * sin(angleInRadians);

    return p;
}
