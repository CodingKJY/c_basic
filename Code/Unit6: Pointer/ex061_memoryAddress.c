#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a  = 10;
    int *p = &a;

    printf("address of a: %p\n", p);
    printf("address of p: %p\n", &p);
    printf("value in <%p>: %d\n", p, *p);
    printf("value in <%p>: %p\n", &p, *(&p));

    return 0;
}