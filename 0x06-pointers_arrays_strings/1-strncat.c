#include "main.h"

/**
 * _strncat - Concatenates two string
 *using at most n bytes from src.
 * @dest: The destination string.
 * @src: The string to be appended.
 * @n: number of bytes from src
 * Return: A pointer to the resulting concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	m = 0;
	while (dest[m] != '\0')
{
		m++;
}
	p = 0;
	while (p < n && src[p] != '\0')
{
	dest[m] = src[p];
	m++;
	p++;
}
	dest[m] = '\0';
	return (dest);
}
