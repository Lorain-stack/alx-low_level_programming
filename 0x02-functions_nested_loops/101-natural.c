#include "main.h"

/**
*main - prints the sum of all multiples of 3 or 5 to up 1023
*Description: prints sum of multiples of some numbers
*Return: number
*/

int main(void)
{
	int i, m = 0;

	while (i < 1024)
{
	if ((i % 3 == 0) || (i % 5 == 0))
{
	m += i;
}
	i++;
}
	printf("%d\n", m)
	return (0);
}
