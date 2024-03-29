#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
int main(){
	int n = 20000;
	int *arr = SortTestHelper::generateRandomArray(n, 0, n);
	int *arr2 = SortTestHelper::copyIntArray(arr, n);
	int *arr3 = SortTestHelper::copyIntArray(arr, n);
	int *arr4 = SortTestHelper::copyIntArray(arr, n);
	int *arr5 = SortTestHelper::copyIntArray(arr, n);
	int *arr6 = SortTestHelper::copyIntArray(arr, n);
	SortTestHelper::testSort("Selection Sort",selectionSort,arr,n);
	SortTestHelper::testSort("Insertion Sort",insertionSort,arr2,n);
	SortTestHelper::testSort("Bubble Sort",bubbleSort,arr3,n);
	SortTestHelper::testSort("Bubble Sort 2",bubbleSort2,arr4,n);
	//SortTestHelper::testSort("Bubble Sort 3",bubbleSort3,arr5,n);
	//SortTestHelper::testSort("Bubble Sort 4",bubbleSort4,arr6,n);
	SortTestHelper::testSort("Quick Sort", quickSort, arr5, n);

	delete[] arr;
	delete[] arr2;
	delete[] arr3;
	delete[] arr4;
	delete[] arr5;
	delete[] arr6;
	return 0;
}

