#include <stdio.h>
/**
* main - Entry Point
*Description: A program that prints all possible
*different combinations of three digits
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	int j;
	
	for (i = 0; i < 100; i++)
        {
		for (j = 0; j < 100; j++)
		{
			if (i < 9)
                	{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
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
