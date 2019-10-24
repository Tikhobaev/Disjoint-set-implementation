//
// Created by Илья on 002 02.10.19.
//

#ifndef DISJOINT_SET_DISJOINT_SET1_H
#define DISJOINT_SET_DISJOINT_SET1_H

#include "DSet.h"

class DSet1 : public DSet
{
public:
    const int maxN;
    DSet1(int);
    ~DSet1();
    void MakeSet(int) override;
    void Union(int, int) override ;
    int Find(int) override ;
    void print();
};
#endif //DISJOINT_SET_DISJOINT_SET1_H
