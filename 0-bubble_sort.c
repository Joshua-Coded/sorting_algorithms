#include "sort.h"
/**
 * swap - Swap two element
 * @xp: Pointer to element to be swapped
 * @yp: Pointer to element to be swapped
 */
void swap(int *xp, int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;

}
/**
 * bubble_sort - Sorts an array of intergers in ascending order
 * @array: array to be sorted
 * @size: Number of elements in an  array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    if (size < 2)
        return;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
