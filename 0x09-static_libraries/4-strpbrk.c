#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string to search
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int set, brk;
	char *p;

	set = 0;
	while (s[set] != '\0')
	{
		brk = 0;
		while (accept[brk] != '\0')
		{
			if (accept[brk] == s[set])
			{
				p = &s[set];
				return (p);
			}
			brk++;
		}
		set++;
	}

	return (0);
}
