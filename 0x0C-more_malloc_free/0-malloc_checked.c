#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocates memory
 *@b: byte size
 *Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
