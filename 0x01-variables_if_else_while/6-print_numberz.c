#include <stdio.h>
/**
 * main - The start of the program
 *
 * Description: Print single digit of base 10
 *
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');
	return (0);
}
