#include "lists.h"

/**
* add_node_end - addds a node to the end of list
*
* @head: pointer to start of list
* @str: string to store list
*
* Return: address of the head
*/
list_t *add_node_end(lists_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*HEAD = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
