#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("last digit of 98 is 8 and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("last digit of 980 is 0 and is 0\n", n, a);
	}
	else
	{
		printf("last digit of -98 is -8 and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
