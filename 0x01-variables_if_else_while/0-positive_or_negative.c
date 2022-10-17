#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - print if the number is positive or negative or zero
 *
 * Return: 0
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;

	if (x > 0)
	{
		printf("%d is positive\n", x);
	}
	else if (x == 0)
	{
		printf("%d is zero\n", x);
	}
	else if (x < 0)
	{
		printf("%d is negative\n", x);

	return (0);
}

