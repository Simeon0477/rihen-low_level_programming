#include <stdio.h>

int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch += 1;
	}

	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch += 1;
	}
	
	putchar('\n');
	return (0);
}
