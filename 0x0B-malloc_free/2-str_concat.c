#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenating two strings
*
* @s1: string one
* @s2: string two
*
* Return: pointer to new string
*/

char *str_concat(char *s1, char *s2)
{
	char *strnew;
	unsigned int i, j, k, max;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	strnew = malloc(sizeof(char) * (i + j + 1));

	if (strnew == NULL)
	{
		free(strnew);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strnew[k] = s1[k];

	max = j;
	for (j = 0; j <= max; j++)
	{
		strnew[k] = s2[j];
		k++;
	}

	return (strnew);
}
