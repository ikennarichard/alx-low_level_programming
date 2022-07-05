#include "main.h"
/**
 * _abs - Proggram that computes the absolute value of an integer
 *
 * @n: takes int input for the function
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
