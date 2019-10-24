//
// Created by Илья on 002 02.10.19.
//

#include "Disjoint_set2.h"
#include <iostream>

DSet2::DSet2(int n) : maxN(n)
{
    arr = new int[maxN+1];
    for (int i = 1; i <= maxN; i++)
    {
        arr[i] = 0;
    }
}

DSet2::~DSet2()
{
    delete[] arr;
}

void DSet2::MakeSet(int x)
{
    arr[x] = x;
}

void DSet2::Union(int x, int y)
{
    arr[Find(x)] = Find(y);
}

int DSet2::Find(int x)
{
    while(arr[x] != x)
    {
        x = arr[x];
    }
    return x;
}

void DSet2::print() {
    for(int i = 1; i <= maxN; i++)
    {
        if (arr[i] == i)
            std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}