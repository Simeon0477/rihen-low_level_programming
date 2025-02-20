#include <stdio.h>

int main(void)
{
	int digit_1, digit_2 = 0;

	while (digit_1 <= 9)
	{
		digit_2 = 0;
		while (digit_2 <= 9)
		{
			if (digit_1 < digit_2)
			{
				putchar(digit_1 + '0');
				putchar(digit_2 + '0');
				if (digit_1 == 8 && digit_2 == 9)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}

			digit_2 += 1;
		}

		digit_1 += 1;
	}

	putchar('\n');
	return (0);
}
