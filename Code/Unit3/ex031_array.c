#include <stdio.h>

int main(void){

    int a1[5];
    int a2[] = {1, 2, 3, 4, 5, 6};

    // initialize array
    for(int i = 0; i < 5; i++) a1[i] = 0;

    // access array
    for(int i = 0; i < 5; i++) printf("a1[%d] = %d\n", i, a1[i]);
    puts("");
    for(int i = 0; i < (int)(sizeof(a2)/sizeof(int)); i++) printf("a2[%d] = %d\n", i, a2[i]);

    return 0;
}