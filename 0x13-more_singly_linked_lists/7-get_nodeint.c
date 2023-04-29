#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	for (i = 0; current && i <= index; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}

	return (NULL);
}
