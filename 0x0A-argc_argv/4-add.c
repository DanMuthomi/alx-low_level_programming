#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - gets sum of positive numbers
*
* @argc: argument counter
* @argv: array argument storage
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int count, i, sum = 0;

	for (count = 1; count < argc; i++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
