#include "main.h"
#include <stdio.h>

void print_alphabets_x10(void)
{
    int j = 0;
    while (j <= 9)
    {
        char ch = 'a';
        while (ch <= 'z')
        {
            putchar(ch);
            ch += 1;
        }

        putchar('\n');
        j++;
    }
}