//
// Created by Jorge on 19/08/2020.
//

#ifndef TRAINING_FUNCIONES_H
#define TRAINING_FUNCIONES_H

#include "lib.h"

//-----------------------Max Heap Sort-----------------------//

void MaxHeapIfY(int arr[], int n, int i);

void BuildMaxHeap(int arr[], int n);

void MaxHeapSort(int arr[], int n);

//-----------------------Min Heap Sort-----------------------//

void MinHeapIfY(int arr[], int n, int i);

void BuildMinHeap(int arr[], int n);

void MinHeapSort(int arr[], int n);

//-----------------------Average Heap Sort-----------------------//

void PromHeapIfY(int arr[], int n, int i, int p);

void BuildPromHeap(int arr[], int n, int p);

void PromHeapSort(int arr[], int n);

#endif //TRAINING_FUNCIONES_H
