#include "main.h"

/**
 * reverse_array - Copies a string
 * @a: array of integers
 * @n: The number of elements in the array.
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0; m < n--; m++)
{
	p = a[m];
	a[m] = a[n];
	a[n] = p;
}
}
