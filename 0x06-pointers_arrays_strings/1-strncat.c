#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most numbers of bytes from @src
 *
 * Return: pointer to resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[i] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
