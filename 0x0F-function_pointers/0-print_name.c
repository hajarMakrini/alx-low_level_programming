#include "function_pointers.h"

/**
 * print_name - prints a name using a functer
 * @name: name of the person
 * @f: function pointer to a function that oid
 *
 * Return: Nothing.
 */

#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
f(name);
}
