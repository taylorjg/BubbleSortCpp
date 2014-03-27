#include "stdafx.h"
#include "BubbleSort.h"
#include <UnitTest++.h>

class BubbleSortTests
{
protected:
	void SortAndCheck(int* arr, int* arrExpected, int size)
	{
		BubbleSortCode::BubbleSort bubbleSort;
		bubbleSort.Sort(arr, size);
		CHECK_ARRAY_EQUAL(arrExpected, arr, size);
	}
private:
};

TEST_FIXTURE(BubbleSortTests, ArrayWithSingleElement)
{
	int arr[] = {1};
	int arrExpected[] = {1};
	int size = sizeof(arr) / sizeof(*arr);
	SortAndCheck(arr, arrExpected, size);
}

TEST_FIXTURE(BubbleSortTests, ArrayWithTwoElementsInCorrectOrder)
{
	int arr[] = {1,2};
	int arrExpected[] = {1,2};
	int size = sizeof(arr) / sizeof(*arr);
	SortAndCheck(arr, arrExpected, size);
}

TEST_FIXTURE(BubbleSortTests, ArrayWithTwoElementsInWrongOrder)
{
	int arr[] = {2,1};
	int arrExpected[] = {1,2};
	int size = sizeof(arr) / sizeof(*arr);
	SortAndCheck(arr, arrExpected, size);
}

TEST_FIXTURE(BubbleSortTests, ArrayWithThreeElementsInReverseOrder)
{
	int arr[] = {3,2,1};
	int arrExpected[] = {1,2,3};
	int size = sizeof(arr) / sizeof(*arr);
	SortAndCheck(arr, arrExpected, size);
}

TEST_FIXTURE(BubbleSortTests, ArrayWithTenElementsInReverseOrder)
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1};
	int arrExpected[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr) / sizeof(*arr);
	SortAndCheck(arr, arrExpected, size);
}

int _tmain(int argc, _TCHAR* argv[])
{
	return UnitTest::RunAllTests();
}
