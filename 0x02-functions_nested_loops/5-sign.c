#include "main.h"
/**
 * print_sign - Print the sign of a number
 *
 * @n: accepts int input for the function
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else iif (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
