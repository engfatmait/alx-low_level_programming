#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: index of the required node
 * Return: the node of given index, NULL if not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;
	unsigned int len = 0;

	while (head != NULL)
		len++;

	node = head;
	while (i < index)
	{
		node = node->next;
		i++;
	}
	if (node == NULL || index > len)
		return (NULL);

	return (node);
}
