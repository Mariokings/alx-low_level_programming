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
	double u;
	printf("The size of a char is: %lu\n", (unsigned long)sizeof(i));
	printf("The size of an int is: %lu\n", (unsigned long)sizeof(h));
	printf("The size of a double is: %lu\n", (unsigned long)sizeof(u));
	return (0);
}
