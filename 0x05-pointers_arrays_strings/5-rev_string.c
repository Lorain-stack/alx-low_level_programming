#include "main.h"

/**
*rev_string - Reversed string
*@s: The string input
*return: string in reverse
*/

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int n;

	while (s[count] != '\0')
	count++;
	for (n = 0; n < count; n++)
{
		count--;
		rev = s[n];
		s[n] = s[count];
		s[count] = rev;
}
}
