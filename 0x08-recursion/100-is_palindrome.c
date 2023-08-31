#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palimore
 * @s: string to reverse
 * Return: if it is, return 1, otherwise 0
 */


int is_palindrome(char *s)
{
	if (*s == 1)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - return the length of a string
 * @s: cal length
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
