#include "main.h"
/**
 * print_most_numbers - prints most numbers
 * prints the numbers from 0 to 9
 * Returns void
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		if (c != 50 && c != 52)
	{
		_putchar (c);
	}
	}
	_putchar ('\n')
}

