#include "sort.h"

/**
 * sort_swap - Swap the two integers in the array.
 * @x: The first integer.
 * @y: The second integer.
 */

void sort_swap(int *x, int *y)
{
	int temp;

	temp = *x
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - Function that sorts an array of integers in ascending order.
 * @array - The array of integers.
 * @size - The size of the array.
 *
 * Description: Print the array each time there is a swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble == true;
		for (i = 0; i < j - 1, 1++)
		{
			if (array[i] > array [i +1])
			{
				sort_swap(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		j--;
	}
}
