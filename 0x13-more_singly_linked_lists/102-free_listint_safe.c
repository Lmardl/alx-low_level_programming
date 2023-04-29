#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node in the list
 *
 * Return: size of the list that was freed
 */
size_t free_listint(listint_t *head)
{
    size_t size = 0;
    listint_t *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
        size++;
    }
    return (size);
}
