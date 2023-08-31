#include "main.h"

/**
 * _strlen_recursion - function that returns the lenth of a string
 * @s: The input string.
 * Return: zero always
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
{
		count++;
		count += _strlen_recursion(s + 1);
}
	return (count);
}
