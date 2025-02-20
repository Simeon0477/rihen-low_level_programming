#include <stdio.h>

int main(void)
{
	char ch = 'z';
	
	while (ch >= 'a')
	{
		putchar(ch);
		ch -= 1;
	}

	putchar('\n');
	return (0);
}

