#include "main.h"

/**
 * _memcpy - A function that fills memory with a constant byte.
 * @dest: The destination memory area.
 * @src: The copied memory location
 *@n:  number of bytes from scr to dest
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int t = n;

	for (; s < t; s++)
{
	dest[s] = src[s];
	n--;
}
	return (dest);
}
