#include <stdio.h>
/**
 * main - The start of the program
 *
 * Description: Print lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char lt = 'z';

	while (lt >= 'a')
	{
		putchar(lt);
		--lt;
	}
	putchar('\n');
	return (0);
}
