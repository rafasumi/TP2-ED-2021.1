#include "Mergesort.h"

using namespace Mergesort;

void Mergesort::merge(int left, int mid, int right, Mind* array) {
  int sizeL = mid - left + 1;
  int sizeR = right - mid;
  
  Mind* valuesL = new Mind[sizeL];
  Mind* valuesR = new Mind[sizeR];

  for (int i = 0; i < sizeL; i++) valuesL[i] = array[left + i];
  for (int j = 0; j < sizeR; j++) valuesR[j] = array[mid+1 + j];

  int indexL = 0;
  int indexR = 0;
  int indexA = left;

  while (indexL < sizeL && indexR < sizeR) {
    if (valuesL[indexL].getName() <= valuesR[indexR].getName()) {
      array[indexA] = valuesL[indexL];
      indexL++;
    } else {
      array[indexA] = valuesR[indexR];
      indexR++;
    }

    indexA++;
  }

  for (; indexL < sizeL; indexL++) {
    array[indexA] = valuesL[indexL];
    indexA++;
  }

  for(; indexR < sizeR; indexR++) {
    array[indexA] = valuesR[indexR];
    indexA++;
  }

  delete[] valuesL;
  delete[] valuesR;
}

void Mergesort::sort(int left, int right, Mind* array) {
  if (left < right) {
    int mid = left + (right - left)/2;
    sort(left, mid, array);
    sort(mid+1, right, array);
    merge(left, mid, right, array);
  }
}

void Mergesort::mergesort(Mind* array, int size) {
  sort(0, size-1, array);
}