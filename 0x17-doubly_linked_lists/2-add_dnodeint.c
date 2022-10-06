#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to the first node on the list
 *
 * @n: data to be stored
 *
 * Return: return address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	if (newnode->next != NULL)
	{
		newnode->next->prev = newnode;
	}
	return (newnode);
}
