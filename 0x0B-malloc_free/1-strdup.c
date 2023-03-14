#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: pointer to a character
 *Return: str
 */
char *_strdup(char *str)
{
	char *s;
	int count;

	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	s = malloc(sizeof(char) * (count + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (str[count] != '\0')
	{
		s[count] = str[count];
		count++;
	}
	s[count] = '\0';
	return (s);
}
