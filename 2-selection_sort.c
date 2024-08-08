#include "sort.h"
/**
 * selection_sort - function
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t r, s; 
	int min, min_index, tmp;

	for (r = 0; r < size - 1; r++)
	{
		s = r + 1;
		min = array[r];

		for (; s < size; s++)
		{
			if (array[s] < min)
			{
				min = array[s];
				min_index = s;
			}
		}

		if (min != array[r])
		{
			tmp = array[r];
			array[r] = array[min_index];
			array[min_index] = tmp;
		}
		print_array(array, size);
	}
}
