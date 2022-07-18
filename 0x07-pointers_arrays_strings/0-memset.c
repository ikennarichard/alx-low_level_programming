/**
 *_memset - Function that fills the first bytes of memeory area
 * pointed to with the constant byte
 *
 *@n: unsigned int variable, the bytes to bee filled
 *
 *@s: input pointer to char type 
 *
 *@b: input variable of char type
 *
 * Return: A pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n) {

	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
