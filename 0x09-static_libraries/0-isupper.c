#include "main.h"

/**
*_isupper - A program that checks for uppercase characters
*@c: variable text
*Description: checks for uppercase characters
*Return: 1 if success otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
{
	return (0);
}
}
