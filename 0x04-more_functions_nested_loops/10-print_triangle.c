#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int h, b;

	if(size <= 0)
		_putchar('\n');
	else
	{
		for(h = 1; h <= size; ++h)
		{
			if ((h + b) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
