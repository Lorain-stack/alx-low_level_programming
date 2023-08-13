#include <stdio.h>
/**
* main - A program that prints the byte size of various computer size
* Return: 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;
printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %1u byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(k));
printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
