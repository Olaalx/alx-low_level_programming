#include "main.h"

/**
 * length_string - return length of string
 * @s: string
 * Return: int
*/
int is_palindrome(char *s);
int check(char *s, int b, int e, int o);
int length_string(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += length_string(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int e = length_string(s);

	return (check(s, 0, e - 1, e % 2));
}

/**
 * check - check string
 * @s: string
 * @b: int move from right to left
 * @e: int move from left to right
 * @o: int
 * Return: 0 or 1
*/

int check(char *s, int b, int e, int o)
{
	if ((b == e && o != 0) || (b == e + 1 && o == 0))
		return (1);
	else if (s[b] != s[e])
		return (0);
	else
		return (check(s, b, e - 1, o));
}
