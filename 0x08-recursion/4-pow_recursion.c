#include "main.h"

/**
 * _pow_recursion - function that returns the val of  x to power y
 * @x: The exponent
 * @y: The subscript
 * Return: power value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
