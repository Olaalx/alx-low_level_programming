#include "main.h"

int prime(int n, int p);

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: int
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - check prime number
 * @n: integer
 * @p: integer
 * Return: 0 or 1
*/

int prime(int n, int p)
{
	if (p == 1)
		return (1);
	if (n % p == 0 && p > 0)
		return (0);
	return (prime(n, p - 1));
}
