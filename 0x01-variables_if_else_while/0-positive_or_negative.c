#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	cout << "Random number = " << random;

	return (0);

}
