#include "main.h"

/**
 * print_most_numbers - print numbers except 2 , 4
 * owned by Bwave ICT
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		if (c != '2' && c != '4')
			putchar(c);
	putchar('\n');
}
