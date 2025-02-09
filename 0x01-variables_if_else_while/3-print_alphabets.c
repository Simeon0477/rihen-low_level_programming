#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH += 1;
	}

	putchar('\n');
	return (0);
}
