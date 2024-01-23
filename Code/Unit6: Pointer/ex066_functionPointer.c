#include <stdio.h>
#include <stdlib.h>

void f1(void){
    printf("calling f1\n");
}

void f2(void){
    printf("calling f2\n");
}

int main(void){

    void (*f)(void);
    void (*F[])(void) = {f1, f2};

    printf("address of f1: %p\n", f1);
    printf("address of f2: %p\n", f2);

    f = f1; f();
    f = f2; f();

    puts("");

    F[0]();
    F[1]();

    return 0;
}