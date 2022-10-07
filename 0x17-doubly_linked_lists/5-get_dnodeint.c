#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: head pointer
 *
 * @index: position of node to return
 *
 * Return: node at the given index or NULL if such index doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trans, *temp;
	size_t count = 1;

	trans = temp = head;
	if (temp == NULL)
		return (NULL);
	if (index == 0)
		return (temp);
	while (trans != NULL)
	{
		trans = trans->next;
		count++;
	}
	if (index >= count)
		return (NULL);
	count = 1;
	while (count <= index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
