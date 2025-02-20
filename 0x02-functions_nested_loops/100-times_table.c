#include "main.h"
#include <stdio.h>

void print_times_table(int n)
{
    if(n < 15 && n > 0)
    {
        for(int i= 0; i <= n; i++){
            for(int  j = 0; j <= n; j++){
                int k = i * j;
                if (k >= 10)
                {
                    putchar(((k / 10) % 10) + '0');
                    putchar((k % 10) + '0');
                    putchar(' ');
                    putchar(',');
                }
                else
                {
                    putchar(k + '0');
                    putchar(' ');
                    putchar(',');
                }
            }
            putchar('\n');
        }   
    }
}