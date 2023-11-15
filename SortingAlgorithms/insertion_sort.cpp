#include <iostream>

// Implementation of insertion sort algorith

void InsertionSort(int* arr, size_t size) {
	for (int i{1}; i < size; ++i) {
		int j{i};
		while (j > 0 && arr[j] < arr[j - 1]) {
			std::swap(arr[j], arr[j - 1]);
			--j;
		}
	}
}
