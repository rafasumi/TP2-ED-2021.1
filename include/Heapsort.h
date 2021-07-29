#ifndef HEAPSORT_H
#define HEAPSORT_H

#include <string>

namespace Heapsort {
  void heapify(int left, int right, std::string* array);
  void buildHeap(std::string* array, int size);
  void heapsort(std::string* array, int size);
}

#endif
