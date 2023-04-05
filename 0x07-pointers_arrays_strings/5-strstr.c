#include <stdlib.h>

/**
 * _strstr - locate a substr
 *
 * @haystack: where to search
 * @needle: what to search
 *
 * Return: the start of substr or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return (NULL);
}
