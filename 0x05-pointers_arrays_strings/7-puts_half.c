#include "main.h"

/**
*puts_half - prints half of a string
*@str: The string input
*return: half string
*/

void puts_half(char *str)
{
	int s, n, count;

	count = 0;

	for (s = 0; str[s] != '\0'; s++)
		count++;

	n = (count / 2);

	if ((count % 2) == 1)
		n = ((count + 1) / 2);

	for (s = n; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
