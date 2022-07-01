#include <stdio.h>
/**
 * main - The start point of our program
 *
 * Description: Print combination of single number
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(digit + 48);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');
	return (0);
}
