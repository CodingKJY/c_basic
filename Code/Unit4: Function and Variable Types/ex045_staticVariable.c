#include <stdio.h>

int f(int n);

int main(void){
    
    printf("f(5) = %d\n", f(5));

    return 0;
}

int f(int n){
    static int counter = 0;
    printf("Counter = %d\n", ++counter);
    if(n == 1) return 1;
    return n + f(n-1);
}