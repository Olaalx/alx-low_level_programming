#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int set, p = 0, pp = 0;

	for (set = 0; set < size; set++)
	{
		p += a[set];
		pp += a[size - set - 1];
		a += size;
	}
	printf("%d, ", p);
	printf("%d\n", pp);
}
