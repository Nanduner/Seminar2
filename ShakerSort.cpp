#include "pch.h"
#include "ShakerSort.h"
template <typename T>
void shakersort(T* arr, int size) {
	bool swapped = true;
	int start = 0;
	int end = size - 1;

	while (swapped) {

		for (int i = start; i < end; i++)
		{
			if (arr[i] > arr[i + 1]) {
				T tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}

		if (!swapped) break;

		swapped = false;
		end--;

		for (int i = end - 1; i >= start; i--)
		{
			if (arr[i] > arr[i + 1]) {
				T tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = true;
			}
		}

		start++;
	}
}