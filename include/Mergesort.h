#ifndef MERGESORT_H
#define MERGESORT_H

#include "Mind.h"

namespace Mergesort {
  // Ordena o array dentro do intervalo [left, right] especificado. Para tal, divide o array
  // em duas metades, com o auxilio de mid, e vai comparando os elementos das duas metades
  // Obs.: O atributo name de Mind é levado em consideração na ordenação
  void merge(int left, int mid, int right, Mind* array);
  
  // Usa o merge para ordenar um array dentro do intervalo [left, right]. Para tal, vai dividindo
  // o array pela metade e se chamando recursivamente
  void sort(int left, int right, Mind* array);
  
  // Executa o algoritmo de Mergesort no array de Mind passado como parâmetro
  void mergesort(Mind* array, int size);
}

#endif
