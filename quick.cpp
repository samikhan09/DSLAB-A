#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void print(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


int divide(int array[], int low, int high) {

  int pivot = array[high];
  int i = (low - 1);


  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  print(array, 7);
  cout << "........\n";
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    // Select pivot position and put all the elements smaller 
    // than pivot on left and greater than pivot on right
    int pi = divide(array, low, high);

    // Sort the elements on the left of pivot
    quickSort(array, low, pi - 1);

    // Sort the elements on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// Driver code
int main() {
  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);
  quickSort(data, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  print(data, n);
}
