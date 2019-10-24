#include <iostream>
#include <time.h>
#include "Disjoint_set1.h"
#include "Disjoint_set2.h"
#include "Disjoint_set3.h"
#include "Disjoint_set4.h"
#include "test.h"
#include <random>
using std::cout;
using std::endl;


template<class DSET>
void testOneSet()
{
    int sizes[] = {10, 50, 100, 500, 1000, 5000, 10000};
    for(int i = 10, ind = 0; ind <= 6; i = sizes[++ind])
    {
        int countOfAttempts = 100;
        int alltime = 0;
        for(int h = 0; h < countOfAttempts; h++) {

            DSET set = DSET(i);
            DSET copySet = DSET(i);
            fill(&set, i);
            fill(&copySet, i);

            int start, end;
            int* elem1 = new int[i-1];
            int* elem2 = new int[i-1];
            int e1 = 0;
            int e2 = 0;
            int uCount = 0; //, fCount = 0;
            while (uCount < i - 1) {
                int el1 = (int) rand() % i + 1;
                int el2 = (int) rand() % i + 1;
                while (set.Find(el1) == set.Find(el2)) {
                    el1 = (int) rand() % i + 1;
                    el2 = (int) rand() % i + 1;
                }
                elem1[e1++] = el1;
                elem2[e2++] = el2;
                set.Union(el1, el2);
                uCount++;
            }

            e1 = 0;
            e2 = 0;
            int f = 0;
            int* op  = getRandArray(i, 1);
            start = clock();
            for (int s = 0; s < 2*i - 2; s++)
            {
                if (op[s]== 1)
                {
                    copySet.Union(elem1[e1++], elem2[e2++]);
                }
                else
                {
                    copySet.Find(elem1[f++]);
                }
            }
            end = clock();
            alltime += end - start;
        }
        cout << "TOTAL: " << i << " elements, time: " << ((double)alltime/countOfAttempts)/CLOCKS_PER_SEC << "sec."<< endl << endl;
    }
}

int main() {
    //test();
    //return 0;
    srand(time(0));
    cout << endl << "========= Disjoint set implementation 1: =========" << endl << endl;
    testOneSet<DSet1>();
    cout << endl << "========= Disjoint set implementation 2: =========" << endl << endl;
    testOneSet<DSet2>();
    cout << endl << "========= Disjoint set implementation 3: =========" << endl << endl;
    testOneSet<DSet3>();
    cout << endl << "========= Disjoint set implementation 4: =========" << endl << endl;
    testOneSet<DSet4>();
    return 0;
}



