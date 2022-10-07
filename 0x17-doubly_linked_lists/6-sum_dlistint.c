#include "lists.h"

/**
 * sum_dlintint - returns the sum of all the data (n) of a dlistint_t linked list.
 *
 * @head: head pointer
 *
 * Return: sum of data in the list or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
