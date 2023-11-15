#include <iostream>
// Last element as a pivot
int Partition(int* arr, int start, int end)
{
	int i{start - 1};
	int pivot{arr[end]};
	for (int j{start}; j <= end - 1; ++j) {
		if (arr[j] < pivot) {
			++i;
			std::swap(arr[j], arr[i]);
		}
	}
	++i;
	std::swap(arr[i], arr[end]);
	return i;
}

// The implementation of quick sort where pivot is the last element
/*
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
*/

/*
int Partition(int* arr, int low, int high)
{
	int pivot{arr[high]};
	int k{low};
	for (int i{low}; i < high; ++i) {
		if (arr[i] < pivot) {
			std::swap(arr[i], arr[k]);
			++k;
		}
	}
	std::swap(arr[k], arr[high]);
	return k;
}
*/



void QuickSort(int* arr, int start, int end)
{
	if (start > end) {
		return;
	}

	int pivot{Partition(arr, start, end)};

	QuickSort(arr, start, pivot - 1);
	QuickSort(arr, pivot + 1, end);
}
