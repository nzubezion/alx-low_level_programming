#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This particularly returns the number of elements in a linked list
 * @h: This points to the list_t list
 * We use the stdlib (standard library) here
 * Return: This returns the number of the elements in h
 */
size_t list_len(const list_t *h)

{
size_t n = 0;

while (h)

{
n++;
h = h->next;
}

return (n);
}
