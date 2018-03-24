#include "colors.h"

u32 ConvertRGBToRGBA(const u32 c)
{
    return (c << 8) | 0xFF;
}

u32 ConvertRGBAToRGB(const u32 c)
{
    return (c >> 8);
}
