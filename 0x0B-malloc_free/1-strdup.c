#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	char *m;

	int s, t = 0;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;

	m = malloc(sizeof(char) * (s + 1));

	if (m == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		m[t] = str[t];

	return (m);
}
