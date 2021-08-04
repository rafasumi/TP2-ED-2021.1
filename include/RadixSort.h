#ifndef RADIX_H
#define RADIX_H

#include "Mind.h"

namespace RadixSort {
  void sort(int left, int right, int bitIndex, Mind* array);
  void radixExchangeSort(Mind* array, int size);
}

#endif
