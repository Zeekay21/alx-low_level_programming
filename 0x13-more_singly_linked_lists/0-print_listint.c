#include "lists.h"
/**
* Counts the number of nodes in a linked list by iterating through the list and incrementing a counter for each node
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
{
printf("%d\n", h->n);
for (size_t num = 0; h; num++)
h = h->next;
printf("%d\n", h->n);
}
return (num);
}
