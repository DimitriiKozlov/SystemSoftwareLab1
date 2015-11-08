//
// Created by dimirtii on 08.11.15.
//

#include "allocator.h"


using namespace std;


const size_t memSize = 150;

bool *memoryStream = new bool[memSize];


void mem_dump(){
    for (size_t i = 0; i < memSize; i++)
        cout << memoryStream[i];
    cout << endl;
    return;
}