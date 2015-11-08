#include <iostream>

using namespace std;

const size_t memSize = 150;

bool* memory = new bool[memSize];

void mem_dump(){
    for (size_t i = 0; i < memSize; i++)
        cout << memory[i];
    cout << endl;
    return;
}

int main(){
    mem_dump();
    return 0;
}
