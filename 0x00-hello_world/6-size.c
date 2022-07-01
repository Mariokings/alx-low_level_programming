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

	printf("The size of a char is: %lu\n", (unsigned long)sizeof(i));
	printf("The size of an int is: %lu\n", (unsigned long)sizeof(h));
	printf("The size of a long int is: %lu\n", (unsigned long)sizeof(u));
	printf("the size of a long long int is: %lu\n", (unsigned long)sizeof(g))
	printf("The size of a float is: %lu\n", (unsigned long)sizeof(q))
	return (0);
}
