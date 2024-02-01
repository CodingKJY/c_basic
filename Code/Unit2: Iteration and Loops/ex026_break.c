#include <stdio.h>

int main(void){

    for(int i = 1; ; i++){
        if(i == 50) break;
        printf("counter = %d\n", i);
    }

    return 0;
}