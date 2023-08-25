#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ch_head;
	size_t length = 0;

	ch_head = malloc(sizeof(list_t));
	if (ch_head == NULL)
		return (NULL);
	ch_head->str = strdup(str);
	while (str[length])
		length++;
	ch_head->len = length;
	ch_head->next = *head;
	*head = ch_head;
	return (ch_head);
}
