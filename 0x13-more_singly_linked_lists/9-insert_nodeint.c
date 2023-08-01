#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *lym;
	listint_t *temp = *head;

	lym = malloc(sizeof(listint_t));
	if (!lym || !head)
		return (NULL);

	lym->n = n;
	lym->next = NULL;

	if (idx == 0)
	{
		lym->next = *head;
		*head = lym;
		return (lym);
	}

	for (l = 0; temp && l < idx; l++)
	{
		if (l == idx - 1)
		{
			lym->next = temp->next;
			temp->next = lym;
			return (lym);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
