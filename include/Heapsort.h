#ifndef HEAPSORT_H
#define HEAPSORT_H

#include "Mind.h"

namespace Heapsort {
  // Faz com que, no intervalo especificado, o array satisfassa a condição de heap
  // Obs.: É levado em consideração o atributo data de Mind
  void heapify(int left, int right, Mind* array);
  
  // Transforma o array passado em heap
  void buildHeap(Mind* array, int n);
  
  // Executa o algoritmo de Heapsort no array de Mind passado como parâmetro
  void heapsort(Mind* array, int size);
}

#endif
