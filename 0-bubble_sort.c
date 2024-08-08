#include "sort.h"
/**
 * bubble_sort - function bubble sort
 * @array: array
 * @size: size to array
 */
void bubble_sort(int *array, size_t size)
{
	size_t route, count;
	int tmp;

	for (route = 0; route < size - 1; route++)
	{
		for (count = 0; count < size - 1 - route; count++)
		{
			if (array[count] > array[count + 1])
			{
				tmp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
