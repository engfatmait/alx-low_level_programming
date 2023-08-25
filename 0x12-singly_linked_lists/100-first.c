#include <stdio.h>
/**
 * startup - fun executed before main
 * Return: nothing
*/
void __attribute__ ((constructor)) startup()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
