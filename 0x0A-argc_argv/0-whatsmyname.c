#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argv: The array/vector of arguments
 * @argc: The nymber of arguments
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

