//
// Created by dimirtii on 08.11.15.
//

#include <iostream>
#include "allocator.h"

using namespace std;


int main(){

    mem_dump();
    void* a = mem_alloc(30);
    cout << a << endl;
    mem_dump();

    void* b = mem_realloc(a, 50);
    cout << b << endl;
    mem_dump();

    return 0;
}
