#include <stdio.h>

// an = 2 * an-1 + 1
// a0 = 1
int a(int n);

int main(void){

    for(int i = 0; i < 10; i++)
        printf("a%d = %d\n", i, a(i));

    return 0;
}
int a(int n){
    if(n == 0) return 1;
    return 2 * a(n-1) + 1;
}