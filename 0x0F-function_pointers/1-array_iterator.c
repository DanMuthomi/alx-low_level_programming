#include "function_pointers.h"

/**
* array_iterator - executes function gives parameter in array
*
* @array: array in question
* @size: size of array
* @action: function pointer
*
* No return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
