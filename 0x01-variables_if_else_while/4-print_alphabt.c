#include <stdio.h>

/**
* main - Entry Point
*Description: A program that prints
*alphabet in lowercase, followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');
	return (0);
}
