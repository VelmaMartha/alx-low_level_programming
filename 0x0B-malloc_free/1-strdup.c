#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: pointer to a character
 *Return: str
 */
char *_strdup(char *str)
{
	char *ptr;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	ptr = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
		ptr[count] = str[count];
	}
	ptr[count] = '\0';
	return (str);
}


