#include <stdio.h>

/**
* prnmain - printing lines before running main
*
* No return
*/
void __attribute__((cinstructor)) prnmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
