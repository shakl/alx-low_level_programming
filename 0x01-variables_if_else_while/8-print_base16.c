#include <stdio.h>

/**
 * main - Use putchar in printing numbers of base 16 in lower case
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 48;

	while (m <= 102)
	{
	putchar(m);

	if (m == 57)
	m += 39;
	++m;
	}
	putchar('\n');

	return (0);
}
