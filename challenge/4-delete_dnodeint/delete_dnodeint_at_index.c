#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the pointer of the first element of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = *head;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (-1);

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	else
		*head = ptr->next;

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	if (*head != NULL && (*head)->prev != NULL)
		(*head)->prev->next = (*head)->next;

	free(ptr);
	return (1);
}
