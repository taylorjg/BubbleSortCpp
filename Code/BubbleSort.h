#ifndef __BUBBLESORTCODE_BUBBLESORT_H
#define __BUBBLESORTCODE_BUBBLESORT_H

namespace BubbleSortCode {

class BubbleSort {
public:
	void Sort(int* arr, int size);
private:
	void Swap(int* arr, int lowerIndex);
};

}

#endif
