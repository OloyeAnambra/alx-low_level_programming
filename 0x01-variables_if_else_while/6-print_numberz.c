#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}

	putchar('\n');

	return (0);
}
