#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates the needed memore for an array
 * @nmemb: Number of elements in the array
 * @size: The size of the elements in bytes
 * char - zero out the memory allocated here
 *
 * Return: Returns the pointer to the allocvated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
	{
	void *myPtr
	unsigned int compSize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	compSize = nmemb * size;

	myPtr = malloc(compSize);

	if (myPtr == NULL)
		return (NULL);

	char *char_ptr = myPtr;
	unsigned int x;

	for (x = 0; x < compSize; x++)

		char_ptr[x] = 0;

	return (myPtr);
}
