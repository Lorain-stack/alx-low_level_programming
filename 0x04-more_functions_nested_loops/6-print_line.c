#include "main.h"

/**
*print_line- A program that draws a striaght line in the terminal
*@n: number oftimes the char _ is printed
*Return: success 0
*/

void print_line(int n)
{
	if (n <= 0)
{
		_putchar('\n');
}
	else
{
		int i;

		for (i = 1; i <= n; i++)
{
			_putchar('_');
}
			_putchar('\n');
}
}
