#include "main.h"

/**
*puts2 - print one char out of two
*@str: The string input
*return: one of two
*/

void puts2(char *str)
{
	char *p = str;
	int count = 0;
	int b = 0;
	int n;

	while (*p != '\0')
{
		p++;
		count++;
}
	b = count - 1;
	for (n = 0; n <= b; n++)
{
		if (n % 2 == 0)
{
		_putchar(str[0]);
}
}
	_putchar('\n');
}
