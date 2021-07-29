#include "Heapsort.h"

using namespace Heapsort;

void Heapsort::heapify(int left, int right, std::string* array) {
  std::string aux;
  int i = left;
  int j = i * 2;

  aux = array[i];

  while (j <= right) {
    if (j < right)
      if (array[j] < array[j+1]) j++;

    if (aux >= array[j]) break;

    array[i] = array[j];
    i = j;
    j = i * 2;
  }

  array[i] = aux;
}

void Heapsort::buildHeap(std::string* array, int size) {
  int left = size/2 + 1;
  while (left > 0) {
    left--;
    heapify(left, size, array);
  }
}

void Heapsort::heapsort(std::string* array, int size) {
  buildHeap(array, size);
  std::string aux;
  int left = 0;
  int right = size-1;

  while (right > 1) {
    aux = array[0];
    array[0] = array[right];
    array[right] = aux;
    right--;
    heapify(left, right, array);
  }
}
