#include "sort.h"
/**
 * selection_sort - function
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t r, s, tmp;

	for (r = 0; r < size - 1; r++)
	{
		for (s = r + 1; s < size; s++)
		{
			if (array[r] > array[s])
			{
				tmp = array[r];
				array[r] = array[s];
				array[s] = tmp;

			}
			print_array(array, size);
		}
	}
}
