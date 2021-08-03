#include "RadixSort.h"

using namespace RadixSort;

const int numbits = 8;

void RadixSort::sort(int left, int right, int bitIndex, Mind* array) {
  int i = left;
  int j = right;
  Mind aux;

  if (right <= left || bitIndex > numbits) return;
  while (j != i) {
    while (array[i].getData()[bitIndex] == '0' && (i < j)) i++;
    while (array[j].getData()[bitIndex] == '1' && (j > i)) j--;

    aux = array[i];
    array[i] = array[j];
    array[j] = aux;
  }
  
  if (array[j].getData()[bitIndex] == '0') j++;
  sort(left, j-1, bitIndex+1, array);
  sort(j, right, bitIndex+1, array);
}

void RadixSort::radixExchangeSort(Mind* array, int size) {
  sort(0, size-1, 0, array);
}
