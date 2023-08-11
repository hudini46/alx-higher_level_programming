#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *list)
{
    const list_t *current;
    unsigned int count;

    current = list;
    count = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        count++;
    }

    return count;
}

list_t *add_node_at_end(list_t **list, const int value)
{
    list_t *new_node;
    list_t *current_node;

    current_node = *list;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = value;
    new_node->next = NULL;

    if (*list == NULL)
        *list = new_node;
    else
    {
        while (current_node->next != NULL)
            current_node = current_node->next;
        current_node->next = new_node;
    }

    return new_node;
}

void free_list(list_t *list)
{
    list_t *current_node;

    while (list != NULL)
    {
        current_node = list;
        list = list->next;
        free(current_node);
    }
}
