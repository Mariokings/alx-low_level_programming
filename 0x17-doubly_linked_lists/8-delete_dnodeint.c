#include "lists.h"
#include <stdlib.h>

int delete_within(dlistint_t **head, unsigned int index);
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 *
 * @head: head pointer to the first element of the list
 *
 * @index: position od node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tail;
	size_t count = 0;

	temp = *head;
	if (temp == NULL)
		return (-1);
	while (temp != NULL)
	{
		count++;
		tail = temp;
		temp = temp->next;
	}
	if (index > count)
		return (-1);
	temp = *head;
	if (index == 0 && count == 1)
	{
		*head = (*head)->next;
		free(temp);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = temp->prev;
		free(temp);
	}
	else if (index == count)
	{
		tail->prev->next = temp;
		free(tail);
	}
	else
		delete_within(head, index);
	return (1);
}

/**
 * delete_within - deletes the node at 'index' index of a linked list.
 *
 * @head: head pointer to the first element of the list
 *
 * @index: position od node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_within(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tail;
	size_t count = 1;

	temp = *head;
	while (count <= index)
	{
		count++;
		tail = temp;
		temp = temp->next;
	}
	tail->next = temp->next;
	temp->next->prev = tail;
	free(temp);
	return (1);
}
