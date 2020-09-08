//
// Created by Jorge on 19/08/2020.
//

#include "funciones.h"

//-------------------MAX HEAP-------------------//

void MaxHeapIfY(int arr[], int n, int i) {
    int largest = i, left = 2*i+1, right = 2*i+2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[largest], arr[i]);
        MaxHeapIfY(arr, n, largest);
    }
}

void BuildMaxHeap(int arr[], int n) {
    for (int i = (n-2)/2; i >= 0; i--)
        MaxHeapIfY(arr, n, i);
}

void MaxHeapSort(int arr[], int n) {
    BuildMaxHeap(arr, n);
    for (int i = n-1; i >= 1; i--) {
        swap(arr[0], arr[i]);
        MaxHeapIfY(arr, i, 0);
    }
}

//-------------------MIN HEAP-------------------//

void MinHeapIfY(int arr[], int n, int i) {
    int shortest = i, left = 2*i+1, right = 2*i+2;

    if (left < n && arr[left] < arr[shortest])
        shortest = left;

    if (right < n && arr[right] < arr[shortest])
        shortest = right;

    if (shortest != i) {
        swap(arr[i], arr[shortest]);
        MinHeapIfY(arr, n, shortest);
    }
}

void BuildMinHeap(int arr[], int n) {
    for (int i = (n-2)/2; i >= 0; i--)
        MinHeapIfY(arr, n, i);
}

void MinHeapSort(int arr[], int n) {
    BuildMinHeap(arr, n);
    for (int i = n-1; i >= 1; i--) {
        swap(arr[i], arr[0]);
        MinHeapIfY(arr, i, 0);
    }
}

//-------------------Average HEAP-------------------//

void PromHeapIfY(int arr[], int n, int i, int p) {
    int prom = i, left = 2*i+1, right = 2*i+2;

    if (left < n && abs(p-arr[left]) > abs(p-arr[prom]))
        prom = left;

    if (right < n && abs(p-arr[right]) > abs(p-arr[prom]))
        prom = right;

    if (prom != i) {
        swap(arr[i], arr[prom]);
        PromHeapIfY(arr, n, prom, p);
    }
}

void BuildPromHeap(int arr[], int n, int p) {
    for (int i = (n-2)/2; i >= 0; i--)
        PromHeapIfY(arr, n, i, p);
}

void PromHeapSort(int arr[], int n) {
    int p = 0;

    for (int i = 0; i < n; i++)
        p += arr[i];

    p /= n;
    cout << "Average = " << p << endl;
    BuildPromHeap(arr, n, p);

    for (int i = n-1; i >= 1; i--) {
        swap(arr[i], arr[0]);
        PromHeapIfY(arr, i, 0, p);
    }
}

//-------------------a***a-------------------//