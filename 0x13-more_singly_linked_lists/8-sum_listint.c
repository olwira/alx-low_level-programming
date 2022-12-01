#include "lists.h"

/**
 * sum_listint - Calculates sum of all data (n) of a listint_t list
 * @head: pointer to head of listint_t list
 * Return: 0 if list is empty, sum of all data otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
