#include "main.h"

/**
 * print_array - prints n elements of array of integers
 *
 * @n: elements input
 * @a: string input
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; ++b)
	{
		if (b != (n - 1))
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
	}
	printf("\n");
}
