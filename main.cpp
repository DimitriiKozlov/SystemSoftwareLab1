//
// Created by dimirtii on 08.11.15.
//

#include <iostream>
#include "allocator.h"

using namespace std;


int main(){

    mem_dump();
    void* a = mem_alloc(8);
    cout << a << endl;
    mem_dump();

    void* b = mem_realloc(a, 9);
    cout << b << endl;
    mem_dump();
    mem_alloc(4);
    void* c = mem_alloc(8);
    mem_alloc(10);
    mem_dump();
    mem_free(c);
    mem_dump();
    mem_alloc(14);
    mem_dump();

    return 0;
}
