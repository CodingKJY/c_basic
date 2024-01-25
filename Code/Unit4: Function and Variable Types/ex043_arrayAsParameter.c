#include <stdio.h>

int sum(int n, int list[]);

int main(void){

    int list[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Sum of list = %d\n", sum(n, list));

    return 0;
}

int sum(int n, int list[]){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += list[i];

    return sum;
}