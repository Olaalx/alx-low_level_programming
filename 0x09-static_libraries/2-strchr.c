#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to constant
 * @c: constant
 * Return: s
*/

char *_strchr(char *s, char c)
{
	int set;

	for (set = 0; s[set] >= '\0'  ; set++)
	{
		if (s[set] == c)
		{
			return (s + set);
		}
	}

	return ('\0');
}
