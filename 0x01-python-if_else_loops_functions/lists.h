#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct listint_s
{
	int value;
	struct listint_s *next_node;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **list_head, const int num);
void free_listint(listint_t *list_head);
listint_t *insert_new_node(listint_t **list_head, int num);

#endif /* LISTS_H */
