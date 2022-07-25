#include <stdio.h>

/**
 * main - prints the number of argument
 *
 * @agrc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
