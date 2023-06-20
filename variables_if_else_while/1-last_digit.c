#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Find the last digit of a randomized number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d\n", n, y);
	if (n > 5)
{
		printf("and is greater than 5\n");
}
	if (n == 0)
{
		printf("and is 0\n");
}
	if ((n < 6) && (n != 0))
{
		printf("and is less than 6 and not 0\n");
}
	return (0);
}
