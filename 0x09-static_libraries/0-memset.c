#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: The destination memory area.
 * @b: The constant byte.
 *@n:  First number of bytes of the memory area pointed to by s
 *
 * Return: A pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
{
	s[m] = b;
	n--;
}
	return (s);
}
