#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
		}
		else
		{
			putchar(ch);
		}
		ch += 1;
	}

	putchar('\n');
	return (0);
}

