#include "sort.h"
/**
 * selection_sort - function
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t r, s, min;
	int tmp = 0;

	for (r = 0; r < size - 1; r++)
	{
		min = r;

		for (s = r + 1; s < size; s++)
		{
			if (array[s] < array[min])
			{
				min = s;
			}
		}

		if (min != r)
		{
			tmp = array[r];
			array[r] = array[min];
			array[min] = tmp;
		}
		print_array(array, size);
	}
}
