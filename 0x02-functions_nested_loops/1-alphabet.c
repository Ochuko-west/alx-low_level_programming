#include "main.h"
/**
 *print_alphabet - prints alpahbet in lowercase, followed by a new line
 *Return: void
 */
void print_alphabet(void)
{	char ch = 'a';
	while (ch <= 'z')
		{_putchar(ch);
		ch++;
		}
	_putchar('\n');
}
