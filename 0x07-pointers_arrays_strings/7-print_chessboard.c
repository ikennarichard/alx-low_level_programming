#include "main.h"

/**
 * print_chessboard - function that print a chessboard
 * @a: pointer input
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int c, b;

	c = 0;
	b = 0;
	while (c < 64)
	{
		if (c % 8 == 0 && c != 0)
		{
		b = c;
		_putchar('\n');
		}

		_putchar(a[c / 8][c - b]);
		c++;
	}
	_putchar('\n');
}
