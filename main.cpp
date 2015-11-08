//
// Created by dimirtii on 08.11.15.
//

#include <iostream>
#include "allocator.h"

using namespace std;


int main(){

    mem_dump();
    cout << mem_alloc(30) << endl;
    mem_dump();

    return 0;
}
