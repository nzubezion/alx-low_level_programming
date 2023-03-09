#include "main.h"
/**
 * _puts_recursion - function like puts();
 * Take note of this code well
 * It is very essential
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
