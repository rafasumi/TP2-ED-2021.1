#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Mind.h"

namespace Heapsort {
  void heapify(int left, int right, Mind* array);
  void buildHeap(Mind* array, int n);
  void heapsort(Mind* array, int size);
}

#endif
