#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible diffrent
 *		combination of two-two digit
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int firstDigit = 0, secondDigit;

	while (firstDigit <= 99)
	{
		secondDigit = firstDigit;
		while (secondDigit <= 99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((secondDigit / 10) + 48);
				putchar((secondDigit % 10) + 48);

				if (firstDigit != 98 || secondDigit != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar("\n");

	return (0);
}
