#ifndef particle_h
#define particle_h

typedef struct
{
    // Starting point
    Vector2 starting_point;
    Vector2 position;
    Vector2 velocity;

    double life;
    // double angle;
    // double speed;

    // char   visible;
    // double wait;
    // double waited;

    unsigned int color;
} Particle;

Particle CreateParticle(double x, double y, double life, double angle, double speed);
// TODO: Add update particle function
void UpdateParticle(Particle *p, double delta);

#endif
