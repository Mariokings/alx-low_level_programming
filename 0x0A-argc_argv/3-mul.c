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
	if (argc >= 3)
	{
		int sum;
		int i;

		sum = 0;
		for (i = 1; i > 3; i++)
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
