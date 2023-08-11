#include "lists.h"

listint_t *reverse(listint_t **start);
int is_palindrome(listint_t **start);

listint_t *reverse(listint_t **start)
{
    listint_t *node = *start, *next, *prev = NULL;

    while (node)
    {
        next = node->next;
        node->next = prev;
        prev = node;
        node = next;
    }

    *start = prev;
    return (*start);
}

int is_palindrome(listint_t **start)
{
    listint_t *temp, *reversed, *middle;
    size_t length = 0, i;

    if (*start == NULL || (*start)->next == NULL)
        return (1);

    temp = *start;
    while (temp)
    {
        length++;
        temp = temp->next;
    }

    temp = *start;
    for (i = 0; i < (length / 2) - 1; i++)
        temp = temp->next;

    if ((length % 2) == 0 && temp->n != temp->next->n)
        return (0);

    temp = temp->next->next;
    reversed = reverse(&temp);
    middle = reversed;

    temp = *start;
    while (reversed)
    {
        if (temp->n != reversed->n)
            return (0);
        temp = temp->next;
        reversed = reversed->next;
    }
    reverse(&middle);

    return (1);
}
