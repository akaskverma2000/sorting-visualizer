#include <graphics.h>
#include <iostream>
#include "sorting_algorithms.h"
#include "sorting_visualizer.h"

using namespace std;

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, ""); // Initialize graphics mode

  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int choice;
  cout << "\n  Sorting Algorithm  " << endl;
  cout << "1. Bubble Sort" << endl;
  cout << "2. Selection Sort" << endl;
  cout << "3. Insertion Sort" << endl;
  cout << "4. Quick Sort" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
    case 1:
      visualizeBubbleSort(arr, n);
      break;
    case 2:
      visualizeSelectionSort(arr, n);
      break;
    case 3:
      visualizeInsertionSort(arr, n);
      break;
    case 4:
      visualizeQuickSort(arr, 0, n - 1);
      break;
    default:
      cout << "Invalid choice!" << endl;
  }

  getch(); // Wait for a key press to close the graphics window
  closegraph(); // Close the graphics window

  return 0;
}
