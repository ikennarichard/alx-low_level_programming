/**
 * reverse_array - Function that reverses an array
 * of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: no value
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
