#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 *
 * Description: structure of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
