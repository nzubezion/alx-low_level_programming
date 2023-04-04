#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This particularly frees a linked list
 * @head: This is the list_t list to be freed
 * We use stdlib.h and lists.h libraries here
 */

void free_list(list_t *head)

{
list_t *temp;

while (head)

{
temp = head->next;
free(head->str);
free(head);
head = temp;
}

}
