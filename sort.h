#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structure */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* prototype */
/* sort */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);

/* swap node */
void swp_nodes(listint_t **list, listint_t **n1, listint_t *n2);

/* print's */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* _SORT_H_ */
