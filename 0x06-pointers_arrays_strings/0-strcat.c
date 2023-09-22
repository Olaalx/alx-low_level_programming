#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int i, ii

	i = 0;
	/*find the size of dest array*/
	while (dest[i])
		i++;

	/* iterate through each src array value whithout the null byte */	for (ii = 0; src[ii] ; ii++)
		/*append src[ii] to dest[i] while overwritting the null byte in dest*/
		dest[ii] = src[ii];

	return (dest);
}
