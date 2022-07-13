#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string input
 *
 * Return: No value
 */

void print_rev(char *s)
{
	int pointer;

	for (pointer = 0; s[pointer] != '\0'; ++pointer)

	for (--pointer; pointer >= 0; --pointer)
		_putchar(s[pointer]);
	_putchar('\n');
}
