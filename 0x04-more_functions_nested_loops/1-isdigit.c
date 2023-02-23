#include "main.h"
/**
 *  _isdigit
 *@c: checks for a digit
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int c;

	if ((c >= 48) && (c <= 57))
		return (1);
		else
		return (0);
}


