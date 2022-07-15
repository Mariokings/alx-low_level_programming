#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	if ((*str % 2) == 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
