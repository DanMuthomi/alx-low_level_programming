#include "main.h"
#include <stdlib.h>

/**
* create_array - creates a char array
*
* @size: size of array
* @c: storage character
*
* Return: pointer to array
*/

char *create_array(insigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
