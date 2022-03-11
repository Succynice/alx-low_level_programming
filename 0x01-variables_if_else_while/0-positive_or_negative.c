#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive: %d\n", n);
	}
	else if (n == 0)
	{
		printf("n is zero: %d\n", n);
	}
	else
	{
		printf("n is negative: %d\n", n);
	}
	return (0);
}
