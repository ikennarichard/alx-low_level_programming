#include "main.h"

/**
 * is_prime - checck if input integer is a prime number
 * @n: input number
 * @c: iterator
 *
 * Return: 1 or 0
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - return 1 if input integer is a prime number else return 0
 * @n: input number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
