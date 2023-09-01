#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins balance
 * @argc: number of arguments
 * @argv: array/vector of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int amt, p, bal;

	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	bal = 0;
	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}
	for (p = 0; p < 5 && amt >= 0; p++)
	{
		while (amt >= coin[p])
		{
			bal++;
			amt -= coin[p];
		}
	}
	printf("%d\n", bal);
	return (0);
}
