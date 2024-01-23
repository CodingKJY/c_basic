#include <stdio.h>

int main(void){

    int x = 5;

    printf("x = %d\n", x);
    printf("P: 0 < x, Q: x < 10\n");

    // P and Q
    printf("Not P  : %d\n", !(0 < x));
    printf("P and Q: %d\n", (0 < x) && (x < 10));
    printf("P or  Q: %d\n", (0 < x) || (x < 10));

    return 0;
}