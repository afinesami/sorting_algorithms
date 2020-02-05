#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list
 *
 * @n: Integer stored
 * @prev: Pointer element of the list
 * @next: Pointer the next element of list
 */
typedef struct listint_s
{
  const int n;
  struct listint_s *prev;
  struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif
