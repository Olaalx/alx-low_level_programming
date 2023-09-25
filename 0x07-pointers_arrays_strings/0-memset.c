#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer constant
 * @b: constsnt
 * @n: bytes
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int set;

	for (set = 0; n > 0; set++, n--)
	{
		s[set] = b;
	}

	return (s);
}
