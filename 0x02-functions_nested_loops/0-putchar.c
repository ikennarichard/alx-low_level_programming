#include "main.h"
/**
 * main - The start of our program
 *
 * Descritpion - Print _putchar and a newline
 *
 * Return: 0
 */
int main(void)
{
	char st[] = "_putchar";
	int lt;

	for (lt = 0; lt < 8; ++lt)
		_putchar(st[lt]);
	_putchar('\n');

	return (0);
}
