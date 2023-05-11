#include <stdio.h>

/**
 * malloc_checked - This allocates memory using malloc
 * @size: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory.
 * if malloc fails, the function terminates the process with status 98
 */

void *malloc_checked(unsigned int size)
{
	void *ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		exit(98);

	return ptr;
