#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

#define UP 0
#define DOWN 1

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

/* printing functions */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* sorting algorithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _quick_sort2(int *ary, int first, int last, int size);
void shell_sort(int *array, size_t size);
void _shell_sort2(int *ary, int size, int n);
void quick_sort_hoare(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void swap_node(listint_t **ptr1, listint_t **ptr2, int n);
void high_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void low_sort(listint_t **ptr, listint_t **limit, listint_t **list);
int max_value(int *array, int size);
void _sub_array(int *subarr, int *buff, size_t front, size_t mid,
		size_t back);
void _sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void ints_swapped(int *y, int *z);
void _heapify(int *array, size_t size, size_t base, size_t root);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);

#endif
