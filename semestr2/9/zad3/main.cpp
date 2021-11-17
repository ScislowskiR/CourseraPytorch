/*
#include <cassert>
#include <cstdlib>
#include <iostream>
#include "memory_sector.h"
#include "memory_operations.h"
#include <atomic>
#include <cstring>

using namespace std;
int * get_left_fence_address(memory_sector_t *memory_sector){
    return &memory_sector->l_fence;
}
int * get_right_fence_address(memory_sector_t *memory_sector){
    return &memory_sector->r_fence;
}
int get_memory_buffer_size(memory_sector_t *memory_sector){
    return *memory_sector->buffer;
}
void initialize_memory(memory_sector_t *memory_sector){
    int*l_fence= get_left_fence_address(memory_sector);
    int*r_fence= get_right_fence_address(memory_sector);;
    *l_fence=FENCE_INITIALIZER;
    *r_fence=FENCE_INITIALIZER;
    int buffer = get_memory_buffer_size(memory_sector);
    for(int *i=l_fence+1;i<r_fence;i++){
        *i=BUFFER_INITIALIZER;
    }
}
address_status_t validate_address(memory_sector_t * memory_sector, const int * address){
    if(address>= get_left_fence_address(memory_sector)&&address<= get_right_fence_address(memory_sector)){
        return NO_ERROR;
    }
    return ADDRESS_OUT_OF_RANGE;
}
address_status_t read_memory(memory_sector_t *memory_sector, const int * address, int * buffer){
    if (validate_address(memory_sector,address)==NO_ERROR){
        *buffer=*address;
        return NO_ERROR;
    }
    return ADDRESS_OUT_OF_RANGE;
}
address_status_t write_memory(memory_sector_t *memory_sector, int * address, int value){
    if(validate_address(memory_sector,address)==NO_ERROR){
        *address=value;
        return NO_ERROR;
    }
    return ADDRESS_OUT_OF_RANGE;
}
//zadanie3
address_status_t  copy_memory(memory_sector_t*memory_sector,int*destination,int*source,size_t size){if(validate_address(memory_sector,destination)==NO_ERROR){memmove(destination,source,size);return NO_ERROR;}return ADDRESS_OUT_OF_RANGE;}

int main() {
    // 1. Initialize memory sector
    memory_sector_t memory_sector;
    initialize_memory(&memory_sector);
    // 2. Validate initialization
    int buffer = 0;

    // 2a. Validate left fence
    assert(read_memory(&memory_sector, get_left_fence_address(&memory_sector), &buffer) == NO_ERROR);
    assert(buffer == FENCE_INITIALIZER);

    // 2b. Validate memory buffer
    for (int * address = get_left_fence_address(&memory_sector) + 1; address < get_right_fence_address(&memory_sector); ++address) {
        assert(read_memory(&memory_sector, address, &buffer) == NO_ERROR);
        assert(buffer == BUFFER_INITIALIZER);
    }

    // 2c. Validate right fence
    assert(read_memory(&memory_sector, get_right_fence_address(&memory_sector), &buffer) == NO_ERROR);
    assert(buffer == FENCE_INITIALIZER);

    // 2d. Read value out of range
    buffer = 0;
    assert(read_memory(&memory_sector, get_right_fence_address(&memory_sector) + 1, &buffer) == ADDRESS_OUT_OF_RANGE);
    assert(buffer == 0);

    // 2e. Write first and last buffer field
    int value = 0xDD;
    assert(write_memory(&memory_sector, get_left_fence_address(&memory_sector) + 1, value) == NO_ERROR);
    assert(read_memory(&memory_sector, get_left_fence_address(&memory_sector) + 1, &buffer) == NO_ERROR);
    assert(buffer == value);

    assert(write_memory(&memory_sector, get_right_fence_address(&memory_sector) - 1, value) == NO_ERROR);
    assert(read_memory(&memory_sector, get_right_fence_address(&memory_sector) - 1, &buffer) == NO_ERROR);
    assert(buffer == value);
    //zadanie3
    int number=4;int*wynik= get_left_fence_address(&memory_sector);assert(copy_memory(&memory_sector,wynik,&number,100)==NO_ERROR);assert(*(wynik)==number);
    std::cout << "All tests passed!" << std::endl;


    return EXIT_SUCCESS;
}
*/
