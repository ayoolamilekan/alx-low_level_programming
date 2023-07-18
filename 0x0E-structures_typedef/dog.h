#ifndef _DOG_H
#define _DOG_H

#include "main.h"

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

#endif
