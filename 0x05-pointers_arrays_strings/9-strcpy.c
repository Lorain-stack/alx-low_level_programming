#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: pointer to
 * @src: pointer from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
