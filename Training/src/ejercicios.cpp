//
// Created by Jorge on 19/08/2020.
//

#include "ejercicios.h"

void ejercicio1() {
    cout << "\n----------------------EJERCICIO 1----------------------\n";
    const int V = 20;
    int arr[V] = {2, 5, 1, 7, 6, 10, 156, 48, 93, 169, 109, 100, 202, 4, 1, 203, 5, 11, 45, 64};
    cout << "UnSorted Array:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl << endl;
    MaxHeapSort(arr, V);
    cout << "Increasingly Sorted Array:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl << endl;

    MinHeapSort(arr, V);
    cout << "Descending Sorted Array:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl << endl;

    //int arr2[4] = {1, 3, 5, 7};
    PromHeapSort(arr, V);
    cout<< "By Average Sorted Array:\n";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

void ejercicio2() {
    cout << "\n----------------------EJERCICIO 2----------------------\n";
    Hash h(5);
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);
    h.print();
    h.MyDelete(4);
    if (h.IsIn(4)) {
        cout << 4 << " Si esta\n";
    } else {
        cout << 4 << " No esta\n";
    }
    h.print();
}

void ejercicio3() {
    cout << "\n----------------------EJERCICIO 3----------------------\n";
    graph g(4);
    g.addEdge(0, 1, 7);
    g.addEdge(1, 0, 7);
    g.addEdge(0, 2, 5);
    g.addEdge(2, 0, 5);
    g.addEdge(0, 3, 1);
    g.addEdge(3, 0, 1);
    g.addEdge(1, 3, 2);
    g.addEdge(3, 1, 2);
    g.addEdge(1, 2, 4);
    g.addEdge(2, 3, 6);

    g.print();
    g.Dijkstra(0);
}
