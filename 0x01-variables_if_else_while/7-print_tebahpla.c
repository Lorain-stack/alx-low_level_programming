#include <stdio.h>

/**
* main - Entry Point
*Description: A program that prints the lowercase
*alphabet in reverse followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	c = 'z';
	while
		(c >= 'a')
	{
			putchar(c);
			c--;
	}
	putchar('\n');
	return (0);
}
