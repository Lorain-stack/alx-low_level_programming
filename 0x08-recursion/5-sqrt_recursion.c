#include "main.h"

int _base_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - function that returns the square root of a number
 * _base_sqrt_recursion - function the do the simple square root of a number
 * @n: The input number
 * @m: The input number
 * Return: square root value
 */

int _base_sqrt_recursion(int n, int m)
{
	if (m * m == n)
{
		return (m);
}
	else if (m * m > n)
{
		return (-1);
}
	else
{
		return (_base_sqrt_recursion(n, m + 1));
}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
{
		return (-1);
}
	return (_base_sqrt_recursion(n, 0));
}

int main(void)
{
	int number = 25;
	int result = _sqrt_recursion(number);

	if (result != -1)
{
		_putchar(result);
}
	else
{
		_putchar (number);
}
	return (0);
}
