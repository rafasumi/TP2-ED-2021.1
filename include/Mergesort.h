#ifndef MERGESORT_H
#define MERGESORT_H

#include <string>

namespace Mergesort {
  void merge(int left, int mid, int right, std::string* array);
  void sort(int left, int right, std::string* array);
  void mergesort(std::string* array, int size);
}

#endif
