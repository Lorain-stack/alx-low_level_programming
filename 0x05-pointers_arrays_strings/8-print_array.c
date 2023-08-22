#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of members in the array
 * Return: a, n
 */
void print_array(int *a, int n)
{
	int elements;

	for (elements = 0; elements < (n - 1); elements++)
	{
		printf("%d, ", a[elements]);
	}
		if (elements == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
