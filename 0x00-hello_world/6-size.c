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
	int ld;
	float f;
	double lf;
	char c;
	int l;

	printf("Size of char: %lu bytes\n",sizeof(c));
	printf("Size of int: %lu bytes\n",sizeof(l));
	printf("Size of long int: %lu bytes\n",sizeof(ld));
	printf("Size of long long int: %lu bytes\n",sizeof(ld));
	printf("Size of float: %lu bytes\n",sizeof(f));
	return (0);	
}

