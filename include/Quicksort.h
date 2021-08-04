#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Mind.h"

namespace Quicksort {
  void partition(int left, int right, int* i, int* j, Mind* array);
  void sort(int left, int right, Mind* array);
  void quicksort(Mind* array, int size);
}

#endif
