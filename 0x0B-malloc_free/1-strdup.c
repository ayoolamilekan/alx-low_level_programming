#include "main.h"
#include <string.h>


/**
 * _strdup - returns ptr to a newly allocated memspace
 * @str: string given as parameter
 *
 * Description: functn that retrns a ptr to a newly alloc memspace
 * which contains a copy of the string given as a parameter.
 * Prototype: char *_strdup(char *str);
 * This function returns a ptr to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free. Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 *
 * Return: success (char*) fail (NULL)
 */


char *_strdup(char *str)
{
	/*declare variables*/
	char *ret;
	size_t i;

	/*assigns memspace using length of given string*/
	ret = malloc(sizeof(char) * strlen(str));
	if (ret == NULL || str == NULL)
		return (NULL);

	i = 0;
	/*copies the given string into allocated memspace*/
	while (i < strlen(str) && str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}

	ret[i] = '\0';
	return (ret);
}
