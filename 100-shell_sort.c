#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm method
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */

void shell_sort(int *array, size_t size)
{
	size_t n = 1;

	while (n < size)
		n = (n * 3) + 1;

	while ((n = (n - 1) / 3) > 0)
		_shell_sort2(array, size, n);
}

/**
 * _shell_sort2 - auxiliar function for shell_sort function
 * @ary: input arrray
 * @size: size of the array
 * @n: intervale
 * Return: no return
 */

void _shell_sort2(int *ary, int size, int n)
{
	int tmp, x, y;

	for (x = 0; (x + n) < size; x++)
	{
		for (y = x + n; (y - n) >= 0; y = y - n)
		{
			if (ary[y] < ary[y - n])
			{
				tmp = ary[y];
				ary[y] = ary[y - n];
				ary[y - n] = tmp;
			}
		}
	}
	print_array(ary, size);
}
