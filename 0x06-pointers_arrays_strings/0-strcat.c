#include "main.h"

/**
 * _strcat - Concatenates two string.
 * @dest: The destination string.
 * @src: The string to be appended.
 *
 * Return: A pointer to the resulting concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
{
	m++;
}
	n = 0;
	while (src[n] != '\0')
{
		dest[m] = src[n];
		m++;
		n++;
}
	dest[m] = '\0';
	return (dest);
}
