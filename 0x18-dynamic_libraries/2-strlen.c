#include "main.h"

/**
* _strlen - length of a string
* @s: parameter
* Return: length
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;

	return (count);
}
