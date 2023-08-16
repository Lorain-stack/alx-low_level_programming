#include "main.h"

/**
*print_alphabet_x10 - Entry point for programme
*Description - _putchar a function that prints the
*alphabet x10
*Return: On success 0
*/

void print_alphabet_x10(void)
{
char c;
int i;
while (i < 10)
{
for (c = 'a'; c >= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}
