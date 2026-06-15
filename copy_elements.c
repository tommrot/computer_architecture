#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void *copy_elements(void **elements, int el_counter, size_t el_size){
    uint64_t size = el_counter * (uint64_t) el_size;
    if (size > SIZE_MAX) return NULL;
    void* result = malloc(size);
    if (result == NULL) return NULL;
    void *next = result;
    for (int i = 0; i < el_counter; i++){
        memcpy(next, elements[i], el_size);  //we ignore returned value, because we care about copy of element in memory, not about its specific address
        next += el_size;                  
    }
    return result;
}