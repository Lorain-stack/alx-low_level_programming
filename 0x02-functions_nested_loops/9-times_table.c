#include "main.h"

/**
*times_table - prints the 9 times tablefrom 0
*Description: prints 9 times table
*Return: empty output
*/

void times_table(void)
{
	int m, n, p, r, s;

	for (m = 0; m <= 9; m++)
{
	for (n = 0; n <= 9; n++)
{
	p = m * n;
	if (p > 9)
{
	r = p % 10;
	s = (p - r) / 10;
	_putchar(m + '0');
	_putchar(44);
	_putchar(32);
	_putchar(s + '0');
	_putchar(r + '0');
}
	else
{
	if (n != 0)
{
	_putchar(44);
	_putchar(32);
	_putchar(32);
}
	_putchar(p + '0');
}
}
	_putchar('\n');
}
}
