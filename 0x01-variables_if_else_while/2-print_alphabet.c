#include <stdio.h>
/**
 * main - The start point of our program
 *
 * Description: Print alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter = "a";
	while (letter <= "z")
	{
		putchar(letter);
		++letter;
	}
	putchar("\n");
	return (0);
}
