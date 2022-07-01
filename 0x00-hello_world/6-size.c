#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;
	int h;
	long int u;
	long long int g;
	float q;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(q));
	return (0);
}
