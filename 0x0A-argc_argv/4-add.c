#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check is a string to a number
 * @str: string array
 *
 * Return: 0 on success
 */

int check_num(char *str)
{
	unsigned int numerate;

	numerate = 0;
	while (numerate < strlen(str))
{
		if (!isdigit(str[numerate]))
{
			return (0);
}
		numerate++;
}
	return (1);
}

/**
 * main - prints program name
 * @argv: The array/vector of arguments
 * @argc: The nymber of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int numerate;
	int str_to_int;
	int sum = 0;

	numerate = 1;
	while (numerate < argc)
{
	if (check_num(argv[numerate]))
{
	str_to_int = atoi(argv[numerate]);
	sum += str_to_int;
}
		else
{
		printf("Error\n");
		return (1);
}
		numerate++;
}
	printf("%d\n", sum);
	return (0);
}
