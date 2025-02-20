#include "main.h"
#include <stdio.h>

void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}

	putchar('\n');
}