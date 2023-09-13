#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to e checked
 * Return: 1 for the alphabetic or 0 for else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
