#include <stdio.h>

/**
*main - A function that prints the largest prime
*factor of the num 612852475143
*Return: success 0
*/

int main(void)
{
	long p = 612852475143, d;

	while (d < (p / 2))
{
		if ((p % 2) == 0)
{
			p /= 2;
			continue;
}
			for (d = 3; d < (p / 2); d += 2)
{
				if ((p % d) == 0)
					p /= d;
}
}
	printf("%ld\n", p);
	return (0);
}
