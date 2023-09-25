#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int set, spn;

	for (set = 0; s[set] != '\0'; set++)
	{
		for (spn = 0; accept[spn] != s[set]; spn++)
		{
			if (accept[spn] == '\0')
				return (set);
		}
	}
	return (set);
}
