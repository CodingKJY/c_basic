#include <stdio.h>
#include <stdlib.h>

struct Human{
    char name[10];
    int  age;
};

int main(void){
    struct Human h1 = {"Jimmy", 25};

    printf("h1.name = %s\n", h1.name);
    printf("h1.age  = %d\n", h1.age);

    return 0;
}