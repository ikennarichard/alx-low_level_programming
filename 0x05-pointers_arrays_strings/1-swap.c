/**
 * swap_int - swaps the values of two integers
 *
 * @a: input first parameter
 * @b: input second parameter
 *
 * Return: No value
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
