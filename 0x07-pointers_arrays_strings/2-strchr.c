#include "main.h"

/**
 * _strchr - A  function that locates
 * a character in a string.
 * @s: The string.
 * @c: first occurance character
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
{
		if (s[i] == c)
			return (&s[i]);
}
	return (0);
}
