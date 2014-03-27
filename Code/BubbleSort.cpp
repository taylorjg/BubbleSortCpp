#include "stdafx.h"
#include "BubbleSort.h"

namespace BubbleSortCode {

void BubbleSort::Sort(int* arr, int size)
{
	if (size < 2) return;
	for (;;) {
		bool doneSwap = false;
		for (int i = size - 2; i >= 0; i--) {
			if (arr[i] > arr[i + 1]) {
				Swap(arr, i);
				doneSwap = true;
			}
		}
		if (!doneSwap) break;
	}
}

void BubbleSort::Swap(int* arr, int lowerIndex) {
	int tmp = arr[lowerIndex];
	arr[lowerIndex] = arr[lowerIndex + 1];
	arr[lowerIndex + 1] = tmp;
}

}
