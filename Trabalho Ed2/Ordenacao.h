#ifndef ORDENACAO_H
#define ORDENACAO_H
#include "Registro.h"


class Ordenacao
{
public:
    static int contadorComparacao;
    static int contadorTrocaDeDados;
    Ordenacao();
    ~Ordenacao();
    static void QuickSort(int *vet, int left, int right);
    static void QuickSort(Registro **vet, int left, int right);

    static void ManualSort(int *vetor, int *vetorValores, int *vetorPosicoes, int tamanho);
    static void ManualSort(int *vetorValores, int tamanho);
    static void MergeSort(int *vet, int left, int right);
    static void CombSort(int *vet, int n);
    static void HeapSort(int *vet, int n);
    static void PrintVetor(int *vet, int n);
    static void InsertionSort(int *vet, int n);

    static void QuickSortInsertion(int *vet, int left, int right);
    static void QuickSortMediana(int *vet, int left, int right, int k, int n );

    static int Mediana(int *vet, int left, int right, int k, int tamanho);
    static int Particao(int *vet, int left, int right, float pivot);
    static void imprimeContadores();

    static long long getContadorTrocaDados();
    static long long getContadorComparacao();
    static void zerarContadores();






private:
    static void Heapify(int *vet, int n, int i);
    static int GetDist(int dist);
    static void Merge(int *vet, int left, int mid, int right);
    static int Particiona(int *vet, int left, int right, float pivot);
    static void Troca(int *vet, int i, int j);

    static void Troca(Registro **vet, int i, int j);
    static int Particiona(Registro **vet, int left, int right, int pivot);

    static bool Teste(int *vetor, int valor, int i);

};

#endif // ORDENACAO_H
