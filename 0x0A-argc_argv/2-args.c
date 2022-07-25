#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of arguments passed
 *
 * @argv: one dimentional array of strings
 *
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
