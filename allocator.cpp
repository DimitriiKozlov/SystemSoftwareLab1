//
// Created by dimirtii on 08.11.15.
//

#include "allocator.h"


using namespace std;


const size_t memSize = 150;

bool *memory = new bool[memSize];


void mem_dump(){
    cout << "Memory status:" << endl;
    for (size_t i = 0; i < memSize; i++)
        cout << memory[i];
    cout << endl;
}

void *mem_alloc(size_t size){
    size_t i = 0;
    size_t freeSize = 0;
    if (!size)
        return NULL;

    while (i < memSize){
        if (!memory[i])
            freeSize++;
        else
            freeSize = 0;

        if (freeSize >= size) {
            for (size_t j = i - freeSize + 1; j < freeSize; j++)
                memory[j] = true;
            return (memory + i - freeSize + 1);
        }
        i++;
    }
    return NULL;
}