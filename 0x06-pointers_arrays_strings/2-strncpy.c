#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string copied.
 * @src: The string to be copied.
 * @n: number of bytes from src
 * Return: A pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
{
		dest[m] = src[m];
		m++;
}
	while (m < n)
{
		dest[m] = '\0';
		m++;
}
	return (dest);
}
