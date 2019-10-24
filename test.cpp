//
// Created by Илья on 002 02.10.19.
// This source file implement the test function for 4 different types of data structure disjoint set

#include "test.h"
#include <iostream>
#include <random>
using std::cout;
using std::endl;

int fill(DSet* set, int n)
{
    int start = clock();
    for (int i = 1; i <= n; i++)
    {
        set->MakeSet(i);
    }
    int end = clock();
    return end - start;
}

int* getRandArray(int n, int max)
{
    srand(time(NULL));
    if (max == 1)
    {
        int* arr = new int[2*n-2];
        for(int i = 0; i < n-1; i++)
        {
            arr[i] = 0;
        }
        for(int i = n-1; i < 2*n-2; i++)
        {
            arr[i] = 1;
        }
        auto rng = std::default_random_engine {};
        std::shuffle (arr, arr + 2 * n - 3, rng);
        return arr;
    }
    else
    {
        int* arr = new int[n-1];
        for(int i = 0; i < n-1; i++)
        {
            arr[i] = i+1;
        }
        srand(time(NULL));
        std::shuffle (arr, arr + n - 2, std::mt19937(std::random_device()()));
        return arr;
    }
}

