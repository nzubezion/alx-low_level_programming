#include <stdio.h>
#include "lists.h"

/**
 * print_list - This prints the elements of a linked list
 * @h: This points to the list_t to print
 * This is important and comes forst
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)

{
size_t s = 0;

while (h)

{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

return (s);
}
