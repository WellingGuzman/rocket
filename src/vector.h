#ifndef vector_h
#define vector_h

typedef struct
{
    double x;
    double y;
} Vector2;

double vector_distance(Vector2 p1, Vector2 p2);
Vector2 vector_add(Vector2 p1, Vector2 p2);

#endif
