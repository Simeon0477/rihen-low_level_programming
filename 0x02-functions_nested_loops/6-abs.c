#include "main.h"
#include <stdio.h>

int _abs(int n)
{
    if (n < 0)
    {
        n = -n;
        return n;
    }

    return n;
}