#include "main.h"

/**
*_strlen - function that counts the length of a string
*@s: string to be counted
*Return: On success return length
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
{
		count++;
		s++;
}
	return (count);
}
