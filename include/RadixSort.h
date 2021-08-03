#ifndef RADIX_H
#define RADIX_H

#include <string>
#include "Mind.h"

namespace RadixSort {
  void sort(int left, int right, int bit, Mind* array);
  void radixExchangeSort(Mind* array, int size);
}

#endif
