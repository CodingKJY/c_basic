#include <stdio.h>

void f1(void);
int  f2(double x);

int main(void){

    double x = 3.14;
    
    f1();
    printf("x = %lf, f(%lf) = %d\n", x, x, f2(x));

    return 0;
}

void f1(void){
    printf("calling f1\n");
}

int f2(double x){
    return (int)x;
}