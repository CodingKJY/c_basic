#include <stdio.h>
#include <stdlib.h>

int main(void){
    int     array[5] = {1, 2, 3, 4, 5};

    printf("address of array: %p\n", array);
    // run indice
    for(size_t i = 0; i < 5; i++)
        printf("address of array[%lu]: %p\n", i, &(array[i]));
    puts("");
    // run by address
    for(size_t i = 0; i < 5; i++)
        printf("address of array + %lu = %p\n", i, array + i);

    return 0;
}