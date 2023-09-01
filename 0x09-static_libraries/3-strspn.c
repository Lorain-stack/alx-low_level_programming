#include "main.h"

/**
 * _strspn - A  function that locates a character in a string.
 * @s: The initial segment byte.
 * @accept: input
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int r;

	while (*s)
{
		for (r = 0; accept[r]; r++)
{
			if (*s == accept[r])
{
				i++;
				break;
}
			else if (accept[r + 1] == '\0')
				return (i);
}
		s++;
}
	return (i);
}
