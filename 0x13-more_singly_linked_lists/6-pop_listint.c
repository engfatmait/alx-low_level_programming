#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: input head node
 * Return: always integer value of n of head node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL)
		return (0);

	tmp = *head;
	num = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (num);
}
