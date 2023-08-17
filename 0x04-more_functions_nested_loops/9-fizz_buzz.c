#include <stdio.h>

/**
*main - prints numbers frm 1-100for multiples of 3
*for multiples of 5 print fizz
*for both mutiples of 3 and 5,print buzz
*Return: success 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
}
	printf("\n");
	return (0);
}
