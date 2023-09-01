#include "main.h"

/**
*_abs - print the absolute value of integers
*@c: the number to be compute
*Return: absolute val of num or 0 for anything else
*/

int _abs(int c)
{
	if (c < 0)
{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
}
	return (c);
}
