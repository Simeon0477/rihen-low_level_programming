#include "main.h"
#include <stdio.h>

int print_last_digit(int c)
{
    int last_digit = _abs(c);
	while (last_digit > 9)
	{
		last_digit %= 10;
	}

    putchar(last_digit + '0');
    return last_digit;
}
