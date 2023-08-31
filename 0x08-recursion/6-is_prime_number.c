#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - say whether a number is prime or not
 * @n: number to check
 * Return: if prime 1, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}


/**
 * actual_prime - calculate if a number is prime recursively
 * @n: number to check
 * @i: iterate
 * Return: if prime 1, otherwise 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, n - 1));
}
