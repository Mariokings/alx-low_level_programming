#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments passed
 *
 * @argv: one dimmensional array of strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int sum;
	int i;

	sum = 1;
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("The sum is: %d\n", sum);

	return (0);
}
