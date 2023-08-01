#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lym;
	listint_t *temp = *head;

	lym = malloc(sizeof(listint_t));
	if (!lym)
		return (NULL);

	lym->n = n;
	lym->next = NULL;

	if (*head == NULL)
	{
		*head = lym;
		return (lym);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = lym;

	return (lym);
}
