#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most numbers of bytes from @src
 *
 * Return: pointer to resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
        int c, 1;

        c = 0;

        /*find the size of dest array*/
        while (dest[c])
                c++;

	/**
	 * src does not need to e null terminated
	 * if it contains n of more bytes
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}
