#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*| == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (hayystack);
	}

	return (0);
}
