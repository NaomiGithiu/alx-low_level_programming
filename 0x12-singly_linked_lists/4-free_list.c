#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees a list_t
* @head: a pointer to the list_t
*/
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (tmp)
	{
		free(tmp->str);
		tmp->str = NULL;
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
	head = tmp = NULL;
}
