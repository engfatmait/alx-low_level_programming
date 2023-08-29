#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *current;

	end = malloc(sizeof(listint_t));
	current = *head;

	if (end == NULL)
		return (NULL);

	end->n = n;

	if (*head == NULL)
		*head = end;
	while (current != NULL)
		current = current->next;
	current->next = end;
	end->next = NULL;

	return (current);
	
}
