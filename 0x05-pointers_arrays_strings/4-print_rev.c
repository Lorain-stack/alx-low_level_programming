#include "main.h"

/**
*print_rev - fxn that print a string in reverse
*@s: The string to print
*return: 0
*/

void print_rev(char *s)
{
	int string_counter = 0;
	int char_in_string;

	while (*s != '\0')
{
		string_counter++;
		s++;
}
	s--;
	for (char_in_string = string_counter; char_in_string > 0; char_in_string--)
{
		_putchar(*s);
		s--;
}
	_putchar('\n');
}
