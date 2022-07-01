#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Start of program
 *
 * Description: Print whether n is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n === 0)
		printf("%i is zero\n", n);
	else
		print("%i is negative\n", n);

	return (0);
}
	
