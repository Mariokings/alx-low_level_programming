#include <stdio.h>

/**
 * main - prints the number of argument
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
