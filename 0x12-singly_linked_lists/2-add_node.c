#include "lists.h"

/**
* add_node - adds node at the start of singly linked list
*
* @head: pointer to first node of list
* @str: string to be added to node
*
* Return: starting address of list
*	  NULL if fail
*/
list_t *add_node(lists_t **head, const char *str)
{
	lists_t *new_node;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;
	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = str_len;
	*head = new_node;

	return (*head);
}
