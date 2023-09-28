#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: point to the beginning of the list
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}


