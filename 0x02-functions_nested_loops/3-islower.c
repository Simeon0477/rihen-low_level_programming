#include "main.h"
#include <stdio.h>


int _islower(int c)
{
    if (c >= 97 && c < 123)
    {
        return 1;
    }
    return 0;
}