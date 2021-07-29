#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <string>

namespace Quicksort {
  void partition(int left, int right, int* i, int* j, std::string* array);
  void sort(int left, int right, std::string* array);
  void quicksort(std::string* array, int size);
}

#endif
