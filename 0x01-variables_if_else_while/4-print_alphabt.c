#include <stdio.h>
/**
 * main - The start point of program
 *
 * Description: Print all letters except q and e
 *
 * Return: 0
 */
int main(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{
		if (lt == 'e' || lt == 'q')
			++lt;
		putchar(lt);
		++lt;
	}
	putchar('\n');
	return (0);
}
