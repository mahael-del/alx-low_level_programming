#include "main.h"
/**
 * _strchr - find an occurance
 * @s: str to be scanned
 * @c: char to find
 * Return: first occur or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
