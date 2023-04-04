/**
 * _memset - a function that fills
 *         memory with a constant byte
 *
 * @s: block of memory to fill
 * @b: character to put
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
