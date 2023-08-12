#include <stdio.h>

/**
* main - Entry Point
*Description: Lower upper case letters
* Return: Always 0 (Success)
*/

int main(void)
{
	char p;

	char q;

	p = 'a';
	q = 'A';
	while
		(p <= 'z') {
			putchar(p);
			p++;
		}
	while
		(q <= 'z') {
			putchar(q);
			q++;
		}
	putchar('\n');
	return (0);
}
