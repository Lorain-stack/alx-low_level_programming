#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @x: The pointer
 * Return: x
 */

char *string_toupper(char *x)
{
	int m;

	m = 0;
	while (x[m] != '\0')
{
		if (x[m] >= 'a' && x[m] <= 'z')
			x[m] = x[m] - 32;
	m++;
}
	return (x);
}
