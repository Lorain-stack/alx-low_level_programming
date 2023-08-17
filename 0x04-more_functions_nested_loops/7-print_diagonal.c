#include "main.h"

/**
*print_diagonal - A program that draws a diagonal line in the terminal
*@n: number oftimes the char _ is printed
*Return: success 0
*/

void print_diagonal(int n)
{
	if (n <= 0)
{
		_putchar('\n');
}
	else
{
		int i, j;

		for (i = 0; i < n; i++)
{
			for (j = 0; j < n; j++)
{
			if (j == i)
			_putchar('\\');
			else if (j < i)
			_putchar(' ');
}
		_putchar('\n');
}
}
}
