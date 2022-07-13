#include "main.h"

/**
 * _puts - print a string, followed by a neewline to stdout
 *
 * @str: string to print
 *
 * Return: No value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
