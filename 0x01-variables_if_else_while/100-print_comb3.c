#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = '0';

	for (n1 = '0'; n1 <= '9'; n1++)
{
	int n2 = '0';

	for (n2 = '0'; n2 <= '9'; n2++)
{
		if (!((n1 == n2) || (n2 > n1)))
{
			putchar(n2);
			putchar(n1);
			if (!(n1 == '9' && n2 == '8'))
{
				putchar(',');
				putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
