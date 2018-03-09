#include "surface.h"

void FlipSurfaceHorizontally(SDL_Surface *surface)
{
    int height = surface->h;
    int width = surface->w;
    u32 *pixels = (u32*)surface->pixels;
    int i, x, y, offset;
    u32 temp;

    for (i = 0; i < height; i++)
    {
        x = width - 1;
        y = 0;
        offset = i * height;

        while (x > y)
        {
            temp = rpixels[offset + x];
            memcpy(&pixels[offset + x], &rpixels[offset + y], sizeof(u32));
            memcpy(&rpixels[offset + y], &temp, sizeof(u32));
            x--;
            y++;
        }
    }
}
