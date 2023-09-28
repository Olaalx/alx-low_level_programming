#include "main.h"

int sqaure(int n, int s);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 *
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqaure(n, 0));
}

/**
 * sqaure - square root of a number
 * @n: int to sqaure
 * @s: natural square root
 * Return: int
*/
int sqaure(int n, int s)
{
	if (s * s > n)
		return (-1);
	else if (s * s == n)
		return (s);
	else
		return (sqaure(n, s + 1));
}
