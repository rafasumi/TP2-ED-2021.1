#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Mind.h"

namespace Quicksort {
  // Acha o ponto de partição para o array no intervalo (left, right) e realiza as trocas necessárias
  // necessárias para a ordenação
  // Obs.: O atributo data de Mind é levado em consideração para a ordenação
  void partition(int left, int right, int* i, int* j, Mind* array);
  
  // Ordena o array no intervalo (left, right) especificado. Usa partition para achar o ponto de partição
  // e se chama recursivamente para ambas as partes
  void sort(int left, int right, Mind* array);
  
  // Executa o algoritmo de Quicksort no array passado como parâmetro
  void quicksort(Mind* array, int size);
}

#endif
