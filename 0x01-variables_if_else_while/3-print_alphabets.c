#include <stdio.h>
/**
 * main - The start point
 *
 * Description: Print alphabets in lowercase and then uppercase
 *
 * Return: 0
 */
int main(void)
{
	char lt = 'a';
	char LT = 'A';

	while (lt <= 'z')
	{
		putchar(lt);
		++lt;
	}

	while (LT <= 'Z')
	{
		putchar(LT);
		++LT;
	}
	putchar('\n');
	return (0);
}
