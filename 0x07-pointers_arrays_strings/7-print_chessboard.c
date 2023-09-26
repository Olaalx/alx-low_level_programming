#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: char
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int set, ard;

	for (set = 0; set < 8; set++)
	{
		for (ard = 0; ard < 8; ard++)
		{
			_putchar(a[set][ard]);
		}
		_putchar('\n');
	}
}
