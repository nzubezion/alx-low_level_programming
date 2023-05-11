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
	void *myPointer
	unsigned int compSize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	compSize = nmemb * size;

	myPointer = malloc(compSize);

	if (myPointer == NULL)
		return (NULL);

	char *char_pointer = myPointer;
	unsigned int x;

	for (x = 0; x < compSize; x++)

		char_pointer[x] = 0;

	return (myPointer);
}
