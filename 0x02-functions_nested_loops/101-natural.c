#include <stdio.h>
/**
 *main - a program that prints the sum of all the
 *multiples of 3 or * 5 below 1024
 *Return: Always 0 (success)
 */
int main(void)
{	unsigned long int mul3, mul5, sum;
	int i = 0;

	mul3 = 0;
	mul5 = 0;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			mul3 = mul3 + i;
		}
		else if ((i % 5) == 0)
		{
			mul5 = mul5 + i;
		}
	}
	sum = mul3 + mul5;
	printf("%lu\n", sum);
	return (0);
}
