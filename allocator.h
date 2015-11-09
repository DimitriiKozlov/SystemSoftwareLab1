//
// Created by dimirtii on 08.11.15.
//

#include <iostream>

// Show memory status
void mem_dump();

// Take memory space
void *mem_alloc(size_t);

// Resize memory space
void *mem_realloc(void*, size_t);

// Take back memory space
void mem_free(void*);

// Get index of memory
size_t getIndexOfMemory(void*);

// Get address of memory
void *getAddresOfMemory(size_t);

