#include <stdio.h>
/**
 * main- finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int d, a, b, a1, a2, b1, b2;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (d = 1; d < 91; d++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}

	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (d = 92; d < 99; ++d)
	{
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b1 % 1000000000);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}

