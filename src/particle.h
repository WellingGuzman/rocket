#ifndef particle_h
#define particle_h

typedef struct
{
    // Starting point
    double x;
    double y;

    double px;
    double py;
    double life;
    double angle;
    double speed;

    double vx;
    double vy;

    char   visible;
    double wait;
    double waited;

    unsigned int color;
} Particle;


#endif
