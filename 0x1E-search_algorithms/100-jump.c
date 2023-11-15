#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value at be searched
 *
 * Return: index of value searched or -1
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0) {
        return -1;
    }
	size_t jump_step = sqrt(size);
    size_t prev = 0;
while (array[prev] < value) {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

        prev += jump_step;

        if (prev >= size) {
            prev = size - 1;
            break;
        }
    }

    size_t i;
    for (i = prev - jump_step; i <= prev && i < size; ++i) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value) {
            return i;
        }
	    }

    return -1;
}

int main() {
 int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value_to_search = 7;

    int result = jump_search(arr, size, value_to_search);

    if (result != -1) {
        printf("Value %d found at index %d\n", value_to_search, result);
    } else {
        printf("Value %d not found in the array\n", value_to_search);
    }

    return 0;
}
