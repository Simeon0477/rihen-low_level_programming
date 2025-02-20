#include <stdio.h>

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch += 1;
	}

	putchar('\n');
	return (0);
}
