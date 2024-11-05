#include "pch.h"
#include "SortBin.h"

template <typename T>
int insertWithBinarySearch(T* arr, T item, int low, int high)
{
    if (high <= low)
        return (item > arr[low]) ? (low + 1) : low;

    int mid = (low + high) / 2;

    if (item == arr[mid])
        return mid + 1;

    if (item > arr[mid])
        return insertWithBinarySearch(arr, item, mid + 1, high);
    return insertWithBinarySearch(arr, item, low, mid - 1);
}

template <typename T>
void insertionSortWithBinarySearch(T* arr, int size)
{
    int location, j, k;

    for (int i = 1; i < size; ++i)
    {
        j = i - 1;
        T selected = arr[i];

        location = insertWithBinarySearch(arr, selected, 0, j);

        while (j >= location)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = selected;
    }
}


