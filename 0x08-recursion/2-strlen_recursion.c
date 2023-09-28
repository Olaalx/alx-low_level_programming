#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s > '\0')
	{
		str += _strlen_recursion(s + 1) + 1;
	}
	return (str);
}

