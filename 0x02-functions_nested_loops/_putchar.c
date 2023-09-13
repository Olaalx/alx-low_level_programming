#include <unistd.h>
#include "main.h" c

/**
 * _putchar - wtites the character c to stdout
 * 0c: the character to print int _putchar(char c)
 *
 * Return: On success 1.
 *      On error -1 is returned, and errno is set appropriately
*/
int _putchar(char c);
{
	return (write(1, &c, 1));
{
