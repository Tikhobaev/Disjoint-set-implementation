//
// Created by Илья on 002 02.10.19.
//

#ifndef DISJOINT_SET_DISJOINT_SET3_H
#define DISJOINT_SET_DISJOINT_SET3_H

#include "DSet.h"
#include <iostream>
class DSet3 : public DSet
{
public:
    const int maxN;
    int* h;
    DSet3(int);
    ~DSet3();
    void MakeSet(int) override ;
    void Union(int, int) override ;
    int Find(int) override ;
    void print();
};


#endif //DISJOINT_SET_DISJOINT_SET3_H
