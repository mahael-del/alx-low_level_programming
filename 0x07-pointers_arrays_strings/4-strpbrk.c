#include <stdlib.h>

/**
 * _strpbrk - searches an str
 *
 * @s: str to find
 * @accept: str to be found
 *
 * Return: NULL or the match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	j = 0;
	while (s[j])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
				return (&s[j]);
		}
		j++;
	}
	return (NULL);
}
