#include <stdio.h>

/**
* print_main - printing lines before running main
*
* No return
*/
void __attribute__((cinstructor)) print_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
