#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of a matrix
 * @a: pointer input
 * @size: size of square matrix
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int s, d1, d2;

	d1 = 0;
	d2 = 0;

	for (s = 0; s < (size * size); s++)
	{
		if (s % (size + 1) == 0)
			d1 += a[s];
		if (s % (size - 1) == 0 && s != 0 && s < size * size - 1)
			d2 += a[s];
	}
	printf("%d, %d\n", d1, d2);
}
