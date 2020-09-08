//
// Created by Jorge on 20/08/2020.
//

#ifndef TRAINING_HASH_H
#define TRAINING_HASH_H

#include "../lib.h"

class Hash {
    list<int> *M;
    int N;
    [[nodiscard]] int HashFun(int n) const;
public:
    explicit Hash(int n);
    ~Hash();
    void MyDelete(int n);
    void insert(int n);
    void print();
    bool IsIn(int n);
};


#endif //TRAINING_HASH_H
