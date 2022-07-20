#include "main.h"

/**
 * _exp_number - returns the square root of the number
 * @n: number
 * @c: iterator
 *
 * Return: square root
 */
int _exp_number(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + _exp_number(n, c + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 *
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_exp_number(n, 2));
}
