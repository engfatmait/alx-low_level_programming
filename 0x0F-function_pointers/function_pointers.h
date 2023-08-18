#ifndef _FUN_PTR_
#define _FUN_PTR_
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));






#endif
