#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list node structure
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
