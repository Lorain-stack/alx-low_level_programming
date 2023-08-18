#include "main.h"

/**
*print_triangle - A function that prints triangles
*@size: The size of triangle to be printed
*Return: success 0
*/

void print_triangle(int size)
{
	int k, i;

	if (size > 0)
{
		for (k = 1; k <= size; k++)
{
			for (i = size - k; i > 0; i--)
{
				_putchar(' ');
}
			for (i = 0; i < k; i++)
{
				_putchar('#');
}
			if (k == size)
{
				continue;
}
			_putchar('\n');
}
}
	_putchar('\n');
}
