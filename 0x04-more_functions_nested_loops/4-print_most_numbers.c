#include "main.h"

/**
 * print_most_numbers - print 0 - 9, except 2 and 4
 * 
 * Return: 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
