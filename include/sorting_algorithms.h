#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

/**
 * Sorts an array of integers in ascending order using Bubble Sort algorithm.
 * @param arr The array to be sorted.
 * @param n The size of the array.
 */
void bubbleSort(int arr[], int n);

/**
 * Sorts an array of integers in ascending order using Selection Sort algorithm.
 * @param arr The array to be sorted.
 * @param n The size of the array.
 */
void selectionSort(int arr[], int n);

/**
 * Sorts an array of integers in ascending order using Insertion Sort algorithm.
 * @param arr The array to be sorted.
 * @param n The size of the array.
 */
void insertionSort(int arr[], int n);

/**
 * Partitions the subarray `arr[low..high]` around a pivot element (usually the last element).
 * @param arr The array to be partitioned.
 * @param low The lower index of the subarray.
 * @param high The higher index of the subarray.
 * @return The index of the pivot element in its final sorted position.
 */
int partition(int arr[], int low, int high);

// Placeholder for quickSort implementation
// void quickSort(int arr[], int low, int high);

#endif
