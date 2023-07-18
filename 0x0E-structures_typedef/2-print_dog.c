#include "dog.h"


/**
 * print_dog - function that prints a struct dog
 * @d: struct of a dog
 *
 * Description: function that prints a struct dog
 * Prototype: void print_dog(struct dog *d);
 * Format: see example bellow
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) in-place.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	char ph[] = "nil";

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("%s\n", ph);
	if (d->name != NULL)
		printf("Age: %f\n", d->age);
	else
		printf("%s\n", ph);
	if (d->name != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("%s\n", ph);
}
