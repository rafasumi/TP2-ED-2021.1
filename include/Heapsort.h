#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <string>
#include "Mind.h"

namespace Heapsort {
  void heapify(int left, int right, Mind* array);
  void buildHeap(Mind* array, int size);
  void heapsort(Mind* array, int size);
}

#endif
