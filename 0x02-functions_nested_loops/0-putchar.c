#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: It prints the word Holberton, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char cool[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(cool[i]);
	}
	_putchar('\n');

	return (0);
}
