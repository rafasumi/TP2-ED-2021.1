#include "Heapsort.h"

#include <iostream>

using namespace Heapsort;

void Heapsort::heapify(int left, int right, Mind* array) {
  Mind aux;
  int i = left;
  int j = i * 2;

  aux = array[i];

  while (j <= right) {
    if (j < right)
      if (array[j].getData() < array[j+1].getData()) j++;

    if (aux.getData() >= array[j].getData()) break;

    array[i] = array[j];
    i = j;
    j = i * 2;
  }

  array[i] = aux;
}

void Heapsort::buildHeap(Mind* array, int size) {
  int left = size/2 + 1;
  while (left > 0) {
    left--;
    heapify(left, size, array);
  }
}

void Heapsort::heapsort(Mind* array, int size) {
  buildHeap(array, size-1);
  Mind aux;
  int left = 0;
  int right = size-1;

  while (right > 0) {
    aux = array[0];
    array[0] = array[right];
    array[right] = aux;
    right--;
    heapify(left, right, array);
  }
}
