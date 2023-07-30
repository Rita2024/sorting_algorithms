#include "sort.h"

/**
 * quick_sort - function that sorts an array
 * of integers in ascending order using the
 * quick sort algorithm method.
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{
	_quick_sort2(array, 0, size - 1, size);
}

/**
 * _quick_sort2 - auxiliary function for the quick_sort function
 * @ary: input arrray
 * @first: index for the first element
 * @last: index for the last element
 * @size: size of the array
 * Return: no return
 */

void _quick_sort2(int *ary, int first, int last, int size)
{
	int p, q, r;
	int tmp;

	if (first < last)
	{
		p = last;
		q = first;
		for (r = first; r < last; r++)
		{
			if (ary[r] < ary[p])
			{
				if (r != q)
				{
					tmp = ary[r];
					ary[r] = ary[q];
					ary[q] = tmp;
					print_array(ary, size);
				}
				q++;
			}
		}
		if (q != p && ary[q] != ary[p])
		{
			tmp = ary[q];
			ary[q] = ary[p];
			ary[p] = tmp;
			print_array(ary, size);
		}
		_quick_sort2(ary, first, q - 1, size);
		_quick_sort2(ary, q + 1, last, size);
	}
}
