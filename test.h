//
// Created by Илья on 002 02.10.19.
//

#ifndef DISJOINT_SET_TEST_H
#define DISJOINT_SET_TEST_H

#include <iostream>
#include <ctime>
#include "Disjoint_set1.h"
#include "Disjoint_set2.h"
#include "Disjoint_set3.h"
#include "Disjoint_set4.h"
#include "DSet.h"
#include <algorithm>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

int fill(DSet*, int);  // Second argument = count of elements
int* getRandArray(int, int);

#endif //DISJOINT_SET_TEST_H
