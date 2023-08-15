#include "main.h"

/**
*print_alphabet - Entry point for programme
*a function that prints the alphabet, in lowercase
*followed by a new line.
*Return: On success 1
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c >= 'z' ; c++)
		_putchar(c);
	_putchar('\n');
}
