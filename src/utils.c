#include "utils.h"

void TurnOnFlag(int *options, int option)
{
    (*options) |= option;
}

void TurnOffFlag(int *options, int option)
{
    (*options) &= ~option;
}

bool IsFlagOn(int options, int option)
{
    return options & option;
}
