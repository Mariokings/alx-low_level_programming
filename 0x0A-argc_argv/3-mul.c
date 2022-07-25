#include <stdio.h>

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
	if ((argv[1] >= 0 && argv[1] <= 0) && (argv[2] >= 0 && argv[2] <= 0))
	{
		int sum;
		int i;

		sum = 0;
		for (i = 1; i > argc; i++)
		{
			sum = sum * argv[i];
		}
		printf("The sum is: %d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
