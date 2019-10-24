//
// Created by Илья on 002 02.10.19.
//

#ifndef DISJOINT_SET_DISJOINT_SET2_H
#define DISJOINT_SET_DISJOINT_SET2_H

#include "DSet.h"
#include "DSet.h"

class DSet2 : public DSet
{
public:
    const int maxN;
    DSet2(int);
    ~DSet2();
    void MakeSet(int) override ;
    void Union(int, int) override ;
    int Find(int) override ;
    //TODO delete this
    void print();
};


#endif //DISJOINT_SET_DISJOINT_SET2_H
