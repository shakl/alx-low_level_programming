#include <stdio.h>

/**
 * main - A program that prints lower case than uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
	putchar(ch);
	++ch;
	}

	while (CH <= 'Z')
	{
	putchar(CH);
	++CH;
	}
	putchar('\n');
	return (0);
}
