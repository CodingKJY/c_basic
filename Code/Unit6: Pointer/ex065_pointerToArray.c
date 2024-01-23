#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a[16];
    printf("2D-Array\n");
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 4; col++){
            *(a + col + 4 * row) = col + 4 * row;
            printf("<%p>: %-3d", a + col + 4 * row, *(a + col + 4 * row));
        }
        puts("");
    }

    int N = 2;
    int *p1 = a;
    int (*p2)[N] = (int(*)[N])p1;

    for(size_t i = 0; i < 4; i++)
        printf("p1 + %lu = <%p>:%3d\tp2 + %lu = <%p>:%3d\n", i, p1 + i, *(p1 + i), i, p2 + i, **(p2 + i));

    return 0;
}