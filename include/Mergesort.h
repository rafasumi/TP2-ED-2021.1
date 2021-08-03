#ifndef MERGESORT_H
#define MERGESORT_H

#include <string>
#include "Mind.h"

namespace Mergesort {
  void merge(int left, int mid, int right, Mind* array);
  void sort(int left, int right, Mind* array);
  void mergesort(Mind* array, int size);
}

#endif
