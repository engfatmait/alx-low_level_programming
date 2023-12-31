#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *cur;

	cur = malloc(sizeof(listint_t));
	if (cur == NULL)
		return (NULL);
	cur->n = n;
	if (idx == 0)
	{
		cur->next = *head;
		*head = cur;
	}
	else
	{
		while (i < idx && head != NULL)
		{
			*head = (*head)->next;
			i++;
		}
		if ((*head)->next == NULL && idx != 0)
			return (NULL);
		cur->next = (*head)->next;
		(*head)->next = cur;
	}
	return (cur);
}
