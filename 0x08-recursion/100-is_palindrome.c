#include "main.h"

int check(char *s, int a, int b);
int length_string(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check(s, 0, length_string(s)));
}

/**
 * length_string - return length of string
 * @s: string
 * Return: int
*/

int length_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length_string(s + 1));
}

/**
 * check - check string
 * @s: string
 * @a: int
 * @b: length
 * Return: 0 or 1
*/

int check(char *s, int a, int b)
{
	if (*(s + a) != *(s + b - 1))
		return (0);
	else if (a >= b)
		return (1);
	return (check(s, a + 1, b - 1));
}
