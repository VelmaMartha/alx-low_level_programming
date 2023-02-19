#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main -Entry point
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	long int ld;
	float f;
	int l;
	char c;
	long long int ll;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

