#include "main.h"
#include <stdio.h>

void jack_bauer(void)
{
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 3; j++){
            for(int k = 0; k <= 5; k++){
                for(int l = 0; l <= 9; l++){
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(':');
                    putchar(k + '0');
                    putchar(l + '0');
                    putchar('\n');
                }
            }
        }
    }   
}