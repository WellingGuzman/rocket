#ifndef colors_h
#define colors_h

#include "head.h"

#define RED(color) ((color & 0xFF000000) >> 24)
#define GREEN(color) ((color & 0x00FF0000) >> 16)
#define BLUE(color) ((color & 0x0000FF00) >> 8)
#define ALPHA(color) (color & 0x000000FF)

u32
rgb_to_rgba(const u32 c);

#endif
