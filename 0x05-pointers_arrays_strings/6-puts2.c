#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: the string to be modified
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
	{
	j++;
	}
	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
