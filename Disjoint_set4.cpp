//
// Created by Илья on 002 02.10.19.
//

#include "Disjoint_set4.h"

DSet4::DSet4(int n) : maxN(n)
{
    arr = new int[maxN+1];
    r = new int[maxN+1];
    for (int i = 1; i <= maxN; i++)
    {
        arr[i] = 0;
        r[i] = 0;
    }
}

DSet4::~DSet4()
{
    delete[] arr;
    delete[] r;
}

void DSet4::MakeSet(int x)
{
    arr[x] = x;
}

void DSet4::Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x == y)
        return;
    if (r[x] < r[y])
        arr[x] = y;
    else
    if(r[x] > r[y])
        arr[y] = x;
    else {
        arr[x] = y;
        r[y]++;
    }
}

int DSet4::Find(int x)
{
    int z = x;  // Copy
    while(arr[x] != x)
    {
        x = arr[x];
    }
    int y = x;
    while(arr[z] != z)
    {
        int z1 = z;
        z = arr[z];
        arr[z1] = y;
    }
    return x;
}

void DSet4::print() {
    for(int i = 1; i <= maxN; i++)
    {
        if (arr[i] == i)
            std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}