#include "sort.h"

/**
 * bubble_sort - Sort an array of integers
 * @array: An array of integers
 * @size: The size of the array
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, len = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub== false)
	{
		bub = true;
		for (x = 0; x < len - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_ints(array + x, array + x + 1);
				print_array(array, size);
				bub = false;
			}
		}
		len--;
	}
}
