#include "main.h"

/**
 * print_alphabet - No entry point
 *
 * Return: On success Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a', i <= 'z', i++)
	{
		_putchar(i);
	}
		putchar('\n');
}
