#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to list to be freed
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
