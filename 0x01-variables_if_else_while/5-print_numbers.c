#include <stdio.h>
/**
 * main - The entry point of our program
 *
 * Description: Print all single digits of base 10
 *
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");
	return (0);
}
