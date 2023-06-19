#include <stdio.h>

/**
 * main - Program that prints alphabets in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	++ch;
	}
	putchar('\n');
	return (0);
}

