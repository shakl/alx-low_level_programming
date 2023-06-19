#include <stdio>

/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 0;

	while (m <= 9)
	{
	putchar(m + 48);

	if (m != 9)
	{
	putchar(',');
	putchar(' ');
	}

	++m;
	}
	putchar('\n');

	return (0);
}
