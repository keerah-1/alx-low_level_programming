#include "lists.h"
/**
 * dlistint_len - return the length of a doubly linked list
 * @h: the doubly linked list
 * Return: the length of the lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t len = 0;

	while (actual)
	{
		actual = actual->next;
		len++;
	}
	return (len);
}
