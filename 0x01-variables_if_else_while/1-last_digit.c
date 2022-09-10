#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int n, m,o,p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		m = n % 10
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}

	else if (n == 0)
		o = n % 10
	{
		printf("Last digit of %d is %d and is zero\n", n, o);
	}

	else if (n < 6 && n != 0)
		p = n % 10
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}

	return (0);
}
