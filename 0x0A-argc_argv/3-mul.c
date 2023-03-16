#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
		return (0);
	}
}

