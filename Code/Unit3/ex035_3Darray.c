#include <stdio.h>

int main(void){

    int A[2][2][2] = {
        {
            {1, 0},
            {0, 1}
        },
        {
            {0, -1},
            {-1, 0}
        }
    };

    printf("sizeof(A)    = %lu\n", sizeof(A));
    printf("sizeof(A[0]) = %lu\n", sizeof(A[0]));

    for(int z = 0; z < 2; z++){
        printf("Layer %d\n", z);
        for(int y = 0; y < 2; y++){
            printf("\t");
            for(int x = 0; x < 2; x++)
                printf("%2d", A[z][y][x]);
            puts("");
        }
        puts("");
    }

    return 0;
}