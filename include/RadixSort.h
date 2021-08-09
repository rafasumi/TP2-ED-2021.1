#ifndef RADIX_H
#define RADIX_H

#include "Mind.h"

namespace RadixSort {
  // Ordena o array no intervalo (left, right) especificado considerando o bit de índice bitIndex
  // do atributo data de Mind e obtém os pontos de partição. Chama-se recursivamente para as duas
  // partes, se os índices forem válidos
  void sort(int left, int right, int bitIndex, Mind* array);

  // Executa o algoritmo de RadixExchangeSort no array passado como parâmetro
  void radixExchangeSort(Mind* array, int size);
}

#endif
