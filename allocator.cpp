//
// Created by dimirtii on 08.11.15.
//

#include "allocator.h"


using namespace std;


const size_t memSize = 60;

u_short *memory = new u_short[memSize];
void *memAddress = memory;


void mem_dump() {
    cout << "Memory status:" << endl;
    for (size_t i = 0; i < memSize; i++)
        cout << memory[i];
    cout << endl;
}

void *mem_alloc(size_t size) {
    size_t i = 0;
    size_t freeSize = 0;

    while (i < memSize) {
        if (!memory[i])
            freeSize++;
        else
            freeSize = 0;

        if (freeSize >= size) {
            size_t j;
            for (j = i - freeSize + 1; j < i + 1; j++)
                memory[j] = 1;
            memory[j - 1] = 5;
            return (memory + (i - freeSize)/ sizeof(u_short));
        }
        i++;
    }
    return NULL;
}

void *mem_realloc(void *addr, size_t size) {
    if (!addr)
        return mem_alloc(size);

    size_t i_first = (size_t) addr - (size_t) memory;
    size_t i, j, i_last;
    size_t freeSize = 0;

    for (i = i_first; memory[i] != 5; i++, freeSize++);

    i_last = i;
    if (size < freeSize) {
        for (j = i; j > i_first + size - 1; j--)
            memory[j] = 0;
        memory[j] = 5;
        return addr;
    }

    while ((memory[i] == 1) || (i <= memSize)) {
        i++;
        freeSize++;
    }

    if (size < freeSize) {
        for (j = i_last; j < i_first + size; j++)
            memory[j] = 1;
        memory[j - 1] = 5;
        return addr;
    }
    return NULL;
}

void mem_free(void *addr){
    if (!addr)
        return;

    size_t i;

    for (i = (size_t) addr - (size_t) memory; memory[i] != 5; i++)
        memory[i] = 0;
    memory[i] = 0;
    return;
}