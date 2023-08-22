#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid
 * Description - gen passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[50];
	int i, iterate, n;

	iterate = 0;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		pass[i] = rand() % 39;
		iterate += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((1500 - iterate) - '0' < 39)
		{
			n = 1500 - iterate - '0';
			iterate += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
