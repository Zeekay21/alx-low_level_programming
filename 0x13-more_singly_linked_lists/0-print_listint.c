#include "lists.h"

/* Print the contents of a linked list*/
void print_list(listint_t *list, char *array)
{
	/* Loop through the array, printing each value on a new line. */
	for (int i=0; i < sizeof(array)/sizeof(int); i++
			{
		      /* Use sprintf to create a formatted string that will print the values in the array*/
		sprintf(array, "%d\n",list->data[i]);
		}
		}	
