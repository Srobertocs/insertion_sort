#include <stdio.h>

void insertionsort(int vetor[], int tamVetor)
{

  int aux;
  int j;

  for (int i = 0; i < tamVetor; i++)
  {
    aux = vetor[i];
    j = i - 1;

    while (j >= 0 && vetor[j] > aux)
    {
      vetor[j + 1] = vetor[j];
      j--;
    }
    vetor[j + 1] = aux;
  }
}

int main()
{
  int vetor[5] = {10, 5, 2, 1, 8};

  insertionsort(vetor, 5);

  for (int i = 0; i < 5; i++)
  {
    printf(" %d ", vetor[i]);
  }
}