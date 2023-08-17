#include "main.h"

/**
*print_square - A program that print a square
*@size: size of square
*Description: Can only use _putchar o print. Use # to print #
*Return: success 0
*/

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
{
		x = 0;
		while (x < size)
{
			_putchar('#');
			x++;
}
		_putchar('\n');
		y++;
}
}
