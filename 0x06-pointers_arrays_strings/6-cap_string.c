#include "main.h"

/**
* cap_string - capitalising all words in a string
*
* @str: input string
*
* Return: string
*/

char *cap_string(char *str)
{
	int a = 0, i;
	int c = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		i = 0;

		while (i < c)
		{
			if ((a == 0 || str[a - 1] == spc[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;
			i++;
		}
		a++;
	}
	return (str);
}
