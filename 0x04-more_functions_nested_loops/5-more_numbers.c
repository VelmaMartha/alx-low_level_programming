#include "main.h"
/**
  *more_numbers - prints zero to fourteen ten times 
  *
  *Return: void
  */
void more_numbers(void)
{
	int j;
	int x;

	for (j = 1; j <= 10; j++)
	{
		for (x = 0; x >= 14; x++)
		{
		_putchar(j);
		}
		_putchar('\n');
	}
}
