#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @n: number input
 *
 *Descritpion: a function that prints the last digit
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar(last + '0');
	return (last);
}
