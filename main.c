#include <stdio.h>
#define TAM 5

void swap(int *x,int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

void bubbleSort (int vetor[],int tam){
  int swapped = 1; // inicializa como 1 para entrar no loop
  for (int j=0; j<tam-1 && swapped; j++) {
    swapped = 0; // 0 pois ainda n realizou a troca
    for(int i=0; i<tam-j-1; i++){
      if (vetor[i] > vetor[i+1]){
        swap(&vetor[i],&vetor[i+1]);
        swapped = 1; // vira 1 para continuar no loop
      }
    }
  }
}

void printarvetor (int vetor[],int tam){
  for(int i=0; i<tam; i++){
    printf("%i ",vetor[i]);
  }
}


int main(void) {
  int vetor[TAM] = {37,2,9,15,42};
  printarvetor(vetor,TAM); // printar antes
  
  bubbleSort(vetor,TAM);
  
  printf("\n");
  printarvetor(vetor,TAM); // printar depois
  return 0;
}