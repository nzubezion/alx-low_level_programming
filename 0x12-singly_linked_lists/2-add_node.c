#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This just adds a new node at the beginning of the linked list
 * @head: This is a double pointer to the list_t list
 * @str: This is the new string to add in the node
 * We use stdlib.h, string.h and lists.h libraries here
 * Return: This returns the address of the new element, or NULL when it fails
 */

list_t *add_node(list_t **head, const char *str)

{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
