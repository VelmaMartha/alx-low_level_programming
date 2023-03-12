#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
	return (0);
}
