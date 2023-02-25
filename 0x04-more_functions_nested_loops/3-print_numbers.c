#include "main.h"

/**
 * print_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
