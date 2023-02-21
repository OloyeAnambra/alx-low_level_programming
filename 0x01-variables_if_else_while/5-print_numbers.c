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
	int digit_num = 0;

	while (digit_num <= 9)
	{
		printf("%d", digit_num);

		digit_num++;
	}

	printf("\n");

	return (0);
}
