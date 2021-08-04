#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include "Mind.h"
#include "Quicksort.h"
#include "Heapsort.h"
#include "Mergesort.h"
#include "RadixSort.h"

int main(int argc, char const *argv[]) {
  std::ifstream inputFile(argv[1]);
  int config = std::stoi(argv[2]);
  int n = std::stoi(argv[3]);

  Mind* array = new Mind[n];

  int count = 1;
  std::string line;
  std::string token;
  const char* delim = " ";

  while (getline(inputFile, line) && count <= n) {
    token = std::strtok(const_cast<char*>(line.c_str()), delim);
    array[count-1].setName(token);

    token = std::strtok(NULL, delim);
    array[count-1].setData(token);

    count++;
  }

  inputFile.close();

  switch (config) {
    case 1:
      Heapsort::heapsort(array, n);
      Quicksort::quicksort(array, n);
      break;
    case 2:
      RadixSort::radixExchangeSort(array, n);
      Quicksort::quicksort(array, n);
      break;
    case 3:
      Heapsort::heapsort(array, n);
      Mergesort::mergesort(array, n);
      break;
    case 4:
      RadixSort::radixExchangeSort(array, n);
      Mergesort::mergesort(array, n);
      break;
    default:
      return -1;
  }

  for (int i = 0; i < n; i++) {
    std::cout << array[i] << std::endl;
  }

  delete[] array;

  return 0;
}
