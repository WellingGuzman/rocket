#include "surface.h"

void FlipSurfaceHorizontally(SDL_Surface *surface)
{
    int height = surface->h;
    int width = surface->w;
    int i, x, y, offset;
    u32 *pixels = (u32*)surface->pixels;
    u32 temp;

    for (i = 0; i < height; i++)
    {
        x = width - 1;
        y = 0;
        offset = i * height;

        while (x > y)
        {
            temp = pixels[offset + x];
            memcpy(&pixels[offset + x], &pixels[offset + y], sizeof(u32));
            memcpy(&pixels[offset + y], &temp, sizeof(u32));
            x--;
            y++;
        }
    }
}

void FlipSurfaceVertically(SDL_Surface *surface)
{
    int height = surface->h;
    int width = surface->w;
    int i, x, y, offsetA, offsetB;
    u32 *pixels = (u32*)surface->pixels;
    u32 temp;

    for (i = 0; i < width; i++)
    {
        x = height - 1;
        y = 0;
        offsetA = i;
        offsetB = (width * (height - 1)) + i;

        while (x > y)
        {
            temp = pixels[offsetA];
            memcpy(&pixels[offsetA], &pixels[offsetB], sizeof(u32));
            memcpy(&pixels[offsetB], &temp, sizeof(u32));

            x--;
            y++;
            offsetA += width;
            offsetB -= width;
        }
    }
}
