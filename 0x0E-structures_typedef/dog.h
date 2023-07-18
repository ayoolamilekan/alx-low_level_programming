#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner's name
 *
 * Description: defines the basic properties of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
