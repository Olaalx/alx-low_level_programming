#include "main.h"

/**
 * *_memcpy -  function that copies memory area.
 * @dest: memory area
 * @src: source
 * @n: src to be copied
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int set;

	for (set = 0; set < n; set++)
	{
		dest[set] = src[set];
	}
	return (dest);
}
