#include "main.h"

/**
 * _print_rev_recursion - function that prints a reversed string
 * @s: The input string.
 * Return: zero always
 */

void _print_rev_recursion(char *s)
{
	if (*s)
{
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
}
