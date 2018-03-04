#ifndef particle_h
#define particle_h

typedef struct
{
    // Starting point
    v2 starting_point;
    v2 position;
    v2 velocity;

    double life;
    // double angle;
    // double speed;

    // char   visible;
    // double wait;
    // double waited;

    unsigned int color;
} Particle;

Particle CreateParticle(double x, double y, double life, double angle, double speed);

#endif
