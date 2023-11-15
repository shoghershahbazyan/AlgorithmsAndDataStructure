#include <iostream>

void BubbleSort(int* arr, size_t size)
{
	for (int i{}; i < size - 1; ++i) {
		bool is_sorted{true};
		for (int j{}; j < size - i -1; ++j) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j+1]);
				is_sorted = false;
			}
		}
		if (is_sorted) {
			break;
		}
	}
}
