#include "main.h"

/**
 * print_alphabet_10 - No entry point
 *
 * Description: print_alphabet_x10 
 *
 * Return: On success Nothing.
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
