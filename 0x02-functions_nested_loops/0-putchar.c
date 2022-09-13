
#include "main.h"
/**
*  main - prints keyword _putchar
*
* Return: zero if exited properly
*
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
		_putchar('\n');

	return (0);
}
