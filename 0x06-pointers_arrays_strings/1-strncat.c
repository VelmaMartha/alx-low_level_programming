#include "main.h"
/**
 *_strncat -  concatenates two strings
 *@dest points to a character
 *@src points to character
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int y;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (y = 0; (y < n && src[y] != '\0'); y++)
	{
		dest[i] = src[y];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
