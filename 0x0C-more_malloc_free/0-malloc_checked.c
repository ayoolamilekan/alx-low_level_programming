#include "main.h"


/**
 * malloc_checked - fctn that allocates memory using malloc
 * @b: memspace to be allocated
 *
 * Description: function that allocates memory using malloc
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should 
 * cause normal process termination with a status value of 98
 *
 */


void *malloc_checked(unsigned int b)
{
	/*declare variables*/
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
		exit(98);

	return (ret);
}
