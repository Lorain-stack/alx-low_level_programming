#include "main.h"

/**
 * _strcmp - Copies a string
 * @s1: The destination string copied.
 * @s2: The string to be copied.
 * Return: difference of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
{
		if (s1[m] != s2[m])
{
			return (s1[m] - s2[m]);
}
	m++;
}
	return (0);
}
