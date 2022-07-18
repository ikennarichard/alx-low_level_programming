/**
 * _strstr - finds the first occurance of a substring in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the start of the substring, else null
 */
char *_strstr(char *haystack, char *needle)
{
	char *str, *sut;

	while (*haystack != '\0')
	{
		str = haystack;
		sut = needle;
		while (*sut != '\0' && *haystack == *sut)
		{
			haystack++;
			sut++;
		}
		if (!*sut)
			return (str);
		haystack++;
	}
	return ('\0');
}
