#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @head: head pointer to the first node
 *
 * @idx: position to insert the new node
 *
 * @n: data to be stored
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *prev;
	size_t count = 1;

	temp = prev = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx == count)
		return (add_dnodeint_end(h, n));
	if (idx > count)
		return (NULL);
	count = 1;
	temp = *h;
	while (count <= idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	new->n = n;
	new->prev = prev;
	new->next = temp;
	prev->next = new;
	temp->prev = new;
	return (new);
}
