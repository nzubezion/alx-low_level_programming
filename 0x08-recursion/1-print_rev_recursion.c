#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * This is an important piece of code
 * Take note
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
