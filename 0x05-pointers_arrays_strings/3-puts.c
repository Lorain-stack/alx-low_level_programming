#include "main.h"

/**
*_puts - function that prints a string
*followed by a new line
*@str: string to be counted
*Return: On success return str
*/

void _puts(char *str)
{
	while (*str != '\0')
{
		_putchar(*str++);
}
		_putchar('\n');
}
