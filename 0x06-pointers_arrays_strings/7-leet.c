#include "main.h"

/**
 * leet - encodes number to 1337
 * @x: input
 * Return: x
 */

char *leet(char *x)
{
	int m, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; x[m] != '\0'; m++)
{
		for (n = 0; n < 10; n++)
{
			if (x[m] == s1[n])
{
				x[m] = s2[n];
}
}
}
	return (x);
}
