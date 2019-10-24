//
// Created by Илья on 002 02.10.19.
//

#include "Disjoint_set3.h"


DSet3::DSet3(int n) : maxN(n)
{
    arr = new int[maxN+1];
    h = new int[maxN+1];
    for (int i = 1; i <= maxN; i++)
    {
        arr[i] = 0;
        h[i] = 0;
    }
}

DSet3::~DSet3()
{
    delete[] arr;
    delete[] h;
}

void DSet3::MakeSet(int x)
{
    arr[x] = x;
}

void DSet3::Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x == y)
        return;
    if (h[x] < h[y])
        arr[x] = y;
    else
        if(h[x] > h[y])
            arr[y] = x;
        else {
            arr[x] = y;
            h[y]++;
        }
}

int DSet3::Find(int x)
{
    while(arr[x] != x)
    {
        x = arr[x];
    }
    return x;
}

void DSet3::print() {
    for(int i = 1; i <= maxN; i++)
    {
        if (arr[i] == i)
            std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}