#include "main.h"
/**
  *print_line - print a straight line
  *
  *Return: void
  */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 1; a <= n; a++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
