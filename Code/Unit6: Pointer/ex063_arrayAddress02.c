#include <stdio.h>
#include <stdlib.h>

int main(void){
    char   carray[5] = {'a', 'b', 'c', 'd', 'e'};
    int    iarray[5] = {1, 2, 3, 4, 5};
    double darray[5] = {1.0, 2.0, 3.0, 4.0, 5.0};

    printf("char array:\n");
    for(size_t i = 0; i < 5; i++)
        printf("address of carray + %lu = %p\n", i, carray + i);

    puts("");
    printf("int array:\n");
    for(size_t i = 0; i < 5; i++)
        printf("address of iarray + %lu = %p\n", i, iarray + i);
    
    puts("");
    printf("double array:\n");
    for(size_t i = 0; i < 5; i++)
        printf("address of darray + %lu = %p\n", i, darray + i);

    return 0;
}