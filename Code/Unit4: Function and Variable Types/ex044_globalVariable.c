#include <stdio.h>

int f1(int n);
int f2(int n);
int counter = 0;

int main(void){

    printf("f1(5) = %d\n", f1(5));
    
    puts("");
    counter = 0;
    printf("f2(5) = %d\n", f2(5));

    return 0;
}

int f1(int n){
    printf("Calling f1 [%d] times\n", ++counter);
    if(n == 1) return 1;
    return n + f1(n-1);
}

int f2(int n){
    printf("Calling f2 [%d] times\n", ++counter);
    if(n == 1 || n == 2) return 1;
    return f2(n - 1) + f2(n - 2);
}