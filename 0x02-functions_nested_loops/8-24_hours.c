#include "main.h"

/**
*jack_bauer - every minute of the day
*Description: Jack prints every minute
*Return: ...
*/

void jack_bauer(void)
{
	int m, n, p, r;

	for (m = 0; m <= 2; m++)
{
	for (n = 0; n <= 9; n++)
{
	if ((m <= 1 && n <= 9) || (m <= 2 && n <= 3))
{
	for (p = 0; m <= 5; p++)
{
	for (r = 0; n <= 9; r++)
{
	_putchar(m + '0');
	_putchar(n + '0');
	_putchar(58);
	_putchar(p + '0');
	_putchar(r + '0');
	_putchar('\n');
}
}
}
}
}
}
