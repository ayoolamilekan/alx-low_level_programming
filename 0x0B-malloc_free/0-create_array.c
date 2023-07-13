#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of char array to be created
 * @c: the array will be initlzd with this char
 *
 * Description: function that creates an array of chars,
 * and initializes it with a specific char
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 * Return: success (char*) fail (NULL)
 */

char *create_array(unsigned int size, char c)
{
	/*define variables*/
	char *cr;
	size_t i;

	cr = malloc(sizeof(int) * (size + 1));
	if (size == 0 || cr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		cr[i] = c;
		i++;
	}
	return (cr);
}
