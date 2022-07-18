/**
 * _strpbrk - locate the occurence of byte in a string
 * @s: pointer to string input
 * @accept: pointer to string we want
 *
 * Return: pointer to byte in s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return ('\0');
}
