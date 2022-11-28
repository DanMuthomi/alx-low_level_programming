#include "lists.h"

/**
* list_len - gets number of nodes in a linked list
*
* @h: singly linked list
*
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t ncnt = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		ncnt++;
	}
	return (ncnt);
}
