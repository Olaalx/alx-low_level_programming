#include "main.h"

/**
 * swap_int - swaps the value off 2 integers
 *		using 2 input parametrs
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
