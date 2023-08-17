#include "main.h"

/**
*print_most_numbers- A program that checks for a digit 0 through 9
*Description: checks for a digit 0 through 9, except 4 n 2
*Return: success 0
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
{
		if (c != 50)
{
			if (c != 52)
{
				_putchar(c);
}
}
}
	_putchar('\n');
}
