//
// Created by Илья on 007 07.10.19.
//

#ifndef DISJOINT_SET_DSET_H
#define DISJOINT_SET_DSET_H


class DSet{
public:
    int* arr;
    virtual void MakeSet(int) {};
    virtual void Union(int, int) {};
    virtual int Find(int) {};
};


#endif //DISJOINT_SET_DSET_H
