#include "sort.h"

/**
 *link_nodes - swap two nodes
 *@list: pointer to linked list
 *@n1: pointer to first node
 *@n2: pointer to first node
 */
void swp_nodes(listint_t **list, listint_t **n1, listint_t *n2)
{
    (*n1)->next = n2->next;
    if (n2->next != NULL)
        n2->next->prev = *n1;
    n2->prev = (*n1)->prev;
    n2->next = *n1;
    if (!(*n1)->prev)
        *list = n2;
    if ((*n1)->prev != NULL)
        (*n1)->prev->next = n2;
    (*n1)->prev = n2;
    *n1 = n2->prev;
}

/**
 *insetion_sort_list - sorts a doubly linked list of integers in 
 *ascending order using the Insertion sort algorithm.
 *@list: double linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *new_node = NULL, *prev = NULL, *new_element = NULL;

    if (!list || !(*list) || !(*list)->next)
        return;

    for (new_node = (*list)->next; new_node; new_node = new_element)
    {
        new_element = new_node->next;
        prev = new_node->prev;
        while (prev && new_node->n < prev->n)
        {
            swp_nodes(list, &prev, new_node);
            print_list((const listint_t *)*list);
        }
        
    }
    
}