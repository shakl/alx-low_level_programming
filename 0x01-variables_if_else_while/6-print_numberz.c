#include <stdio.h>

/**
 * main - Use putchar and int variable to print 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 0;

	while (m <= 9)
	{
	putchar(m + '0');
	++m;
	}
	putchar('\n');

	return (0);
}

