#include <stdio.h>

/**
* main - prints its name followed by a new line
*
* @argc: Argument counter
* @argv: Array storing arguments passed
*
* Return: 0 is success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
