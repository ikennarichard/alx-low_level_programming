#include "main.h"
/**
 * print_alphabet_x10 - Program that prints 10x alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int l, lt;

	for (l = 0; l <= 9; ++l)
	{
		for (lt = 'a'; lt <= 'z'; ++lt)
			_putchar(lt);
		_putchar('\n');
	}
}
