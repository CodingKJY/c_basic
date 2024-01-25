#include <stdio.h>
#include <stdlib.h>

typedef struct Human Human;
struct Human{
    char name[10];
    int  age;
};

int main(void){
    Human h1 = {"Jimmy", 25};

    printf("h1.name = %s\n", h1.name);
    printf("h1.age  = %d\n", h1.age);

    return 0;
}