#include "main.h"

/**
* _strcat - concatenates two strings
*
* @dest: destination
* @src: source
*
* return: dest
*/

char *_strcat(char *dest, char *src)
{
	int count1, count2;

	count1 = 0;
	count2 = 0;

	while (dest[count1++])
	{
		count2++;
	}
	for (count1 = 0; src[count1]; count1++)
	{
		dest[count2++] = src[count];
	}
	return (dest);
}
