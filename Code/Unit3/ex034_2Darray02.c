#include <stdio.h>

int main(void){

    int n = 3;
    int A[n][n];

    // initialize matrix
    for(int row = 0; row < n; row++)
        for(int col = 0; col < n; col++)
            A[row][col] = col + n * row;

    // access matrix
    for(int row = 0; row < n; row++){
        for(int col = 0; col < n; col++)
            printf("%2d", A[row][col]);
        puts("");
    }

    return 0;
}