#include "main.h"

/**
*_isdigit - A program that checks for a digit 0 through 9
*@c: integer value
*Description: checks for a digit 0 through 9
*Return: 1 if success otherwise 0
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
