#include "function_pointers.h"

/**
 * print_name - print the name given as parameter
 * @name: name to print
 * @f: function to print
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
