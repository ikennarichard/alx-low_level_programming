/**
 * _strcpy - copiesthe string pointed to by src
 * including the null byte (\0)
 * to the buffer pointed to by dest
 *
 * @src: string input
 * @dest: string destination
 *
 * Return: pointer to dest input
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
