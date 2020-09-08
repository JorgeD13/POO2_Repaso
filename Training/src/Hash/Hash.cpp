//
// Created by Jorge on 20/08/2020.
//

#include "Hash.h"

Hash::Hash(int n) {
    N = n;
    M = new list<int>[N];
}

Hash::~Hash() {
    delete[] M;
}

int Hash::HashFun(int n) const {
    return n % N;
}

void Hash::insert(int n) {
    int i = HashFun(n);
    M[i].push_back(n);
}

bool Hash::IsIn(int n) {
    int i = HashFun(n);
     return any_of(M[i].begin(), M[i].end(), [n](int x) {return x == n;});
    //for (auto x : M[i])
    //    if (x == n) return true;
    //return false;
}

void Hash::MyDelete(int n) {
    int i = HashFun(n);
    bool key = true;
    list<int>::iterator iterator, it = M[i].begin();

    while (key & it != M[i].end()) {
        if(*(it) == n) {
            iterator = it;
            key = false;
        }
    }

    if (!key)
        M[i].erase(iterator);
}

void Hash::print() {
    cout << "Hash Table\n";
    for (int i = 0; i < N; i++) {
        cout << i << ": ";
        for (auto x : M[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}
