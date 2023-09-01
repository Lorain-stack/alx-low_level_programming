#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, x, y, len, z, num;

	i = 0;
	x = 0;
	y = 0;
	len = 0;
	z = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && z == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (x % 2)
				num = -num;
			y = y * 10 + num;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);

	return (y);
}

/**
 * main - prints final results
 * @argv: The array/vector of arguments
 * @argc: The nymber of arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int final, a1, a2;

	if (argc < 3 || argc > 3)
{
		printf("Error\n");
		return (1);
}
	a1 = _atoi(argv[1]);
	a2 = _atoi(argv[2]);
	final = a1 * a2;
	printf("%d\n", final);
	return (0);
}
