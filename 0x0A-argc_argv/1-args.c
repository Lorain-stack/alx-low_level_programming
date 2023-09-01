#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed in program
 * @argv: The array/vector of arguments
 * @argc: The nymber of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);
		return (0);
}
