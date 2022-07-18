/**
 * _strspn - pprovide the number of bytes from accept
 * @s: pointer to string
 * @accept: bytes to return from
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, a;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		a = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a = 0;
				break;
			}
			j++;
		}
		if (a == 1)
			break;
		i++;
	}
	return (i);
}

