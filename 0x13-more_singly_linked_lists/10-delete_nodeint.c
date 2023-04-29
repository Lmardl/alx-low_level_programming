#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: double pointer to the head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; current && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (!current)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
