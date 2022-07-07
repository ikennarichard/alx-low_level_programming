#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input
 *
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * prime_factor - finds and prints the largets prime factor of a number
 *
 * @num: number to find
 */

void prime_factor(long int num)
{
	int prmNu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNu = 3; prmNu <= _sqrt(num); prmNu +=2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Satrt point
 *
 * Return: 0
 */


int main(void)
{
	prime_factor(612852475143);

	return (0);
}
		
