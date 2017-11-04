#include "utils.h"

void
turn_flag_on(int *options, int option)
{
    (*options) |= option;
}

void
turn_flag_off(int *options, int option)
{
    (*options) &= ~option;
}

char
is_flag_on(int options, int option)
{
    return options & option;
}
