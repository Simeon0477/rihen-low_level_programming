#include <stdio.h>

int main(void)
{
	int n = 0;
	
	while (n < 10)
	{
		putchar(n + '0');
		n += 1;
	}

	putchar('\n');
	return (0);
} 
