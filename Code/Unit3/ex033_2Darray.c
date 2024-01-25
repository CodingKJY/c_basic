#include <stdio.h>

int main(void){

    int A[2][2];
    int B[2][2] = {
        {1, 0},
        {0, 1}
    };
    int C[][2] = {
        {1, 1},
        {1, 0}
    };

    printf("sizeof(A)    = %lu\n", sizeof(A));
    printf("sizeof(A[0]) = %lu\n", sizeof(A[0]));

    return 0;
}