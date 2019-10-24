//
// Created by Илья on 002 02.10.19.
//

#ifndef DISJOINT_SET_DISJOINT_SET4_H
#define DISJOINT_SET_DISJOINT_SET4_H

#include "DSet.h"
#include <iostream>

class DSet4 : public DSet
{
public:
    const int maxN;
    int* r;
    DSet4(int);
    ~DSet4();
    void MakeSet(int) override;
    void Union(int, int) override;
    int Find(int) override;
    void print();
};


#endif //DISJOINT_SET_DISJOINT_SET4_H
