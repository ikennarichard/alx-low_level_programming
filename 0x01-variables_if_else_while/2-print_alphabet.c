#include <stdio.h>
/**
 * main - The entry point of program
 *
 * Description: Print all alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{
		putchar(lt);
		++lt;
	}
	putchar('\n');
	return (0);

}
