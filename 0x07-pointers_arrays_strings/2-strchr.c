/**
 * _strchr - a function that find a value in  a string
 * @s: pointer to our string array
 * @c: character to locate
 *
 * Return: a pointer  or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
