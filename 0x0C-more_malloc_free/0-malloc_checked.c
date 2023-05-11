#include <stdio.h>

/**
 * malloc_checked - This allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory.
 * if malloc fails, the function terminates the process with status 98
 */

void *malloc_checked(unsigned int b)
{
	void *myPtr;

	myPtr = malloc(b);
	if (myPtr == NULL)
		exit(98);

	return (myPtr);
}
