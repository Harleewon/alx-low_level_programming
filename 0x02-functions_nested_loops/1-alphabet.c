void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i) {

		putchar(tolower(i));
	}

	return (0);
}

#include "main.h"

/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}
