#include "Mergesort.h"

using namespace Mergesort;

void Mergesort::merge(int left, int mid, int right, std::string* array) {
  int sizeL = mid - left + 1;
  int sizeR = right - mid;
  
  std::string* valuesL = new std::string[sizeL];
  std::string* valuesR = new std::string[sizeR];

  for (int i = 0; i < sizeL; i++) valuesL[i] = array[left + i];
  for (int j = 0; j < sizeR; j++) valuesR[j] = array[mid+1 + j];

  int indexL = 0;
  int indexR = 0;
  int indexA = left;

  while (indexL < sizeL && indexR < sizeR) {
    if (valuesL[indexL] < valuesR[indexR]) {
      array[indexA] = valuesL[indexL];
      indexL++;
    } else {
      array[indexA] = valuesR[indexR];
      indexR++;
    }

    indexA++;
  }

  if (indexA < sizeL + sizeR) {
    for (; indexL < sizeL; indexL++) {
      array[indexA] = valuesL[indexL];
      indexA++;
    }

    for(; indexR < sizeR; indexR++) {
      array[indexA] = valuesR[indexR];
      indexA++;
    }
  }

  delete[] valuesL;
  delete[] valuesR;
}

void Mergesort::sort(int left, int right, std::string* array) {
  if (left < right) {
    int mid = (left + right)/2;
    sort(left, mid, array);
    sort(mid+1, right, array);
    merge(left, mid, right, array);
  }
}

void Mergesort::mergesort(std::string* array, int size) {
  sort(0, size-1, array);
}