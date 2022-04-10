#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Determin if a random number is posetive, negative or zero.
 *
 * Return: 0 on  Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code gose here */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
