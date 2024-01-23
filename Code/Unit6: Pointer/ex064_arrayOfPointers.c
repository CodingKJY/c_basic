#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a[3] = {1, 2, 3};
    int *p[3];

    for(size_t i = 0; i < 3; i++){
        p[i] = a + i;
        printf("a + %lu = %p\n", i, a + i);
        printf("p[%lu]  = %p\n", i, p[i]);
        puts("");
    }
    
    return 0;
}