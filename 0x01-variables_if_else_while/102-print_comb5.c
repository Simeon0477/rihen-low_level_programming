#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int digit_1, digit_2, digit_3, digit_4 = 0;

	while (digit_1 <= 9)
	{
		digit_2 = 0;
		while (digit_2 <= 9)
		{
			digit_3 = 0;
			while (digit_3 <= 9)
			{
				digit_4 = 0;
				while (digit_4 <= 9)
				{
					if (digit_1 <= digit_3 && digit_2 < digit_4)
					{
						putchar(digit_1 + '0');
						putchar(digit_2 + '0');
						putchar(' ');
						putchar(digit_3 + '0');
						putchar(digit_4 + '0');
						if (digit_1 == '9' && digit_2 == '8' && digit_3 == '9' && digit_4 == '9')
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}

					digit_4 += 1;
				}

				digit_3 += 1;
			}

			digit_2 += 1;
		}

		digit_1 += 1;
	}
	
	putchar('\n');
	return (0);
}

