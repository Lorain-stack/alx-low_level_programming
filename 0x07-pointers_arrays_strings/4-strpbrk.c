#include "main.h"

/**
 * _strpbrk - A  function that locates a character in a string.
 * @s: The initial segment byte.
 * @accept: input
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int r = 0;

	while (*s)
{
		for (r = 0; accept[r]; r++)
{
		if (*s == accept[r])
		return (s);
}
	r++;
}
	return ('\0');
}
