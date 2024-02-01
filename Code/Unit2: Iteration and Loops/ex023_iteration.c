#include <stdio.h>

int main(void){
    
    // summation 1, ..., 10
    for(int i = 1, j = 0; i <= 10; i++){
        j += i;
        printf("i = %d, j = %d\n", i, j);
    }

    return 0;
}