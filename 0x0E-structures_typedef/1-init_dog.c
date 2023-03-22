#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable
 *@d: points to a structure
 * @name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
