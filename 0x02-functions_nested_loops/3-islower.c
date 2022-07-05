#include "main.h"
/**
 * _islower - A program that checks for lowercase character
 * @c: function input
 * Return: return 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
