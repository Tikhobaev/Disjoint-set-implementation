//
// Created by Илья on 002 02.10.19.
//
#include "Disjoint_set1.h"
#include "DSet.h"
#include <iostream>

DSet1::DSet1(int n) : maxN(n)
{
    arr = new int[maxN + 1];
    for (int i = 1; i <= maxN; i++)
    {
        arr[i] = 0;
    }
}

DSet1::~DSet1()
{
    delete[] arr;
}

void DSet1::MakeSet(int x)
{
    if (x <= maxN)
        arr[x] = x;
}

void DSet1::Union(int x, int y)
{
    int prev = arr[x];
    for (int i = 1; i <= maxN; i++)
    {
        if(arr[i] == prev)
            arr[i] = arr[y];
    }
}

int DSet1::Find(int x)
{
    return arr[x];
}

void DSet1::print() {
    for(int i = 1; i <= maxN; i++)
    {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}