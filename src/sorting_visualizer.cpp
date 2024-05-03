#include <graphics.h>
#include <iostream>
#include "sorting_algorithms.h"

using namespace std;

const int delayTime = 300; // milliseconds

/**
 * Clears the graphics window before redrawing the array.
 */
void cleardevice() {
  // Replace with appropriate function call based on your graphics library
}

/**
 * Draws the elements of the array as rectangles on the graphics window.
 * @param arr The array to be visualized.
 * @param n The size of the array.
 * @param dist (Optional) The distance between rectangles. Defaults to 6.
 */
void drawArray(int arr[], int n, int dist = 6) {
  cleardevice();
  for (int i = 0; i < n; i++) {
    rectangle(0, 100 + i * 8, 10 * arr[i], 100 + dist + i * 8);
  }
}

/**
 * Swaps the color used for drawing rectangles.
 * @param color1 The first color.
 * @param color2 The second color.
 */
void swapColors(int color1, int color2) {
  setcolor(color2);
}

/**
 * Visualizes the Bubble Sort algorithm for the given array.
 * @param arr The array to be sorted.
 * @param n The size of the array.
 */
void visualizeBubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      drawArray(arr, n);
      swapColors(YELLOW, BLACK);
      rectangle(0, 100 + j * 8, 10 * arr[j], 100 + dist + j * 8);
      rectangle(0, 100 + (j + 1) * 8, 10 * arr[j + 1], 100 + dist + (j + 1) * 8);
      swapColors(BLACK, YELLOW);
      delay(delayTime);
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        drawArray(arr, n);
        delay(delayTime);
      }
    }
  }
}

/**
 * Visualizes the Selection Sort algorithm for the given array.
 * @param arr The array to be sorted.
 * @param n The size of the array.
 */
void visualizeSelectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      drawArray(arr, n);
      swapColors(YELLOW, BLACK);
      rectangle(0, 100 + i * 8, 10 * arr[i], 100 + dist + i * 8); // Highlight current minimum element
      rectangle(0, 100 + minIndex * 8, 10 * arr[minIndex], 100 + dist + minIndex * 8);
      swapColors(BLACK, YELLOW);
      delay(delayTime);
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    if (minIndex != i) {
      swap(arr[i], arr[minIndex]);
      drawArray(arr, n);
      delay(delayTime);
    }
  }
}


/**
 * Visualizes the Quick Sort algorithm for the given array.
 * @param arr The array to be sorted.
 * @param low The lower index of the subarray.
 * @param high The higher index of the subarray.
 */
void visualizeQuickSort(int arr[], int low, int high) {
  if (low < high) {
    // Partition the array
    int pivot = partition(arr, low, high);

    // Visualize the pivot element
    drawArray(arr, n);
    swapColors(YELLOW, BLACK);
    rectangle(0, 100 + pivot * 8, 10 * arr[pivot], 100 + dist + pivot * 8);
    swapColors(BLACK, YELLOW);
    delay(delayTime);

    // Recursively sort the subarrays before and after the pivot
    visualizeQuickSort(arr, low, pivot - 1);
    visualizeQuickSort(arr, pivot + 1, high);
  }
}

/**
 * Visualizes the Insertion Sort algorithm for the given array.
 * @param arr The array to be sorted.
 * @param n The size of the array.
 */
void visualizeInsertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    drawArray(arr, n);
    swapColors(YELLOW, BLACK);
    rectangle(0, 100 + i * 8, 10 * arr[i], 100 + dist + i * 8); // Highlight current element
    delay(delayTime);

    while (j >= 0 && arr[j] > key) {
      swapColors(YELLOW, BLACK);
      rectangle(0, 100 + j * 8, 10 * arr[j], 100 + dist + j * 8);
      rectangle(0, 100 + (j + 1) * 8, 10 * arr[j + 1], 100 + dist + (j + 1) * 8);
      swapColors(BLACK, YELLOW);
      delay(delayTime);

      arr[j + 1] = arr[j];
      j--;

      drawArray(arr, n); // Update visualization after shift
      delay(delayTime);
    }
    arr[j + 1] = key;
  }
}
