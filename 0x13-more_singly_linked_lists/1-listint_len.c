#include "lists.h"
/**
* listint_len - this function returns the number of elements in a linked lists
* h: linked list 
* size_t num = 0;: loop through the linked list until the end is reached
*while (h): increment the number of elements by 1
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
