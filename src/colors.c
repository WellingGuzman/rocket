#include "colors.h"

u32
rgb_to_rgba(const u32 c)
{
    return (c << 8) | 0xFF;
}
