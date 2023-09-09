#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible diffrent
 *		combination of two-two digit
 *
 * Return: 0
*/

int main(void)
{
	int firstDigit = 0, seconDigit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
