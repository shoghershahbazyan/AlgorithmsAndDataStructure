#include <iostream>

// The implementation of quick sort where pivot is the firts element
int Partition(int* arr, int low, int high) {
	int pivot{arr[low]};
	int k{high};
	for (int i{high}; i > low; --i) {
		if (arr[i] > pivot) {
			std::swap(arr[i], arr[k]);
			--k;
		}
	}
	std::swap(arr[k], arr[low]);
	return k;
}

void QuickSort(int* arr, int low, int high) {
	if (low >= high) {
		return;
	}

	int pivot{Partition(arr, low, high)};
	std::cout << pivot << std::endl;
	QuickSort(arr, low, pivot - 1);
	QuickSort(arr, pivot + 1, high);
}
