#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
  // Find the maximum element in the array
  int maxElement = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > maxElement) {
      maxElement = arr[i];
    }
  }

  // Create a count array to store the frequency of each element
  int countArr[maxElement + 1] = {0};
  for (int i = 0; i < n; i++) {
    countArr[arr[i]]++;
  }

  // Calculate the cumulative sum of the count array
  for (int i = 1; i <= maxElement; i++) {
    countArr[i] += countArr[i - 1];
  }

  // Create an output array to store the sorted elements
  int outputArr[n];

  // Fill the output array by placing elements according to their counts
  for (int i = n - 1; i >= 0; i--) {
    outputArr[countArr[arr[i]] - 1] = arr[i];
    countArr[arr[i]]--;
  }

  // Copy the sorted elements back to the original array
  for (int i = 0; i < n; i++) {
    arr[i] = outputArr[i];
  }
}

int main() {
  int arr[] = {6, 1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  countingSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}

