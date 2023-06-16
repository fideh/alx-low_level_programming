#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random number to the variable 'n' each time it is executed
 *        and prints the last digit of the number stored in 'n'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d ", n, x);

	if (x > 5)
	{
		printf("and is greater than 5");
	}
	else if (x == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}

