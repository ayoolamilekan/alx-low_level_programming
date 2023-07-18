#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: dog struct to be initlzd
 * @name: dog name to initlz struct
 * @age: dog age to initlz struct
 * @owner: owner name to initlz struct
 *
 * Description: function to initlz a variable of type struct dog
 * Prototype:
 * void init_dog(struct dog *d, char *name, float age, char *owner);
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
