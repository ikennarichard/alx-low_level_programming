#include "main.h"
/**
 * print_alphabet - Print alphabets using the _putchar function
 * 
 * Description: use the _putchar function to print alphabets
 */
void print_alphabet(void)
{
	int lt;

	for (lt = 'a'; lt <= 'z'; ++lt)
		_putchar(lt);
	_putchar('\n');
}
