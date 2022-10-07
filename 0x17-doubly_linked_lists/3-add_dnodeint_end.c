#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlinstint_t list
 *
 * @head: a head pointer to the first node
 *
 * @n: data to be stored
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *end, *previ;

	temp = *head;
	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->prev = temp;
	end->next = NULL;
	if (temp == NULL)
		*head = end;
	else
	{
		while (temp != NULL)
		{
			previ = temp;
			temp = temp->next;
		}
		end->prev = previ;
		previ->next = end;
	}
	return (end);
}
