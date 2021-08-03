#include "Quicksort.h"

using namespace Quicksort;

void Quicksort::partition(int left, int right, int* i, int* j, Mind* array) {
  Mind aux1, aux2;

  *i = left;
  *j = right;
  aux1 = array[(*i + *j)/2];

  do {
    while (aux1.getName() > array[*i].getName()) (*i)++;
    while (aux1.getName() < array[*j].getName()) (*j)--;

    if (*i <= *j) {
      aux2 = array[*i];
      array[*i] = array[*j];
      array[*j] = aux2;
      
      (*i)++;
      (*j)--;
    }
  } while (*i <= *j);
}

void Quicksort::sort(int left, int right, Mind* array) {
  int i, j;
  partition(left, right, &i, &j, array);
  if (left < j) sort(left, j, array);
  if (i < right) sort(i, right, array);
}

void Quicksort::quicksort(Mind* array, int size) {
  sort(0, size-1, array);
}
