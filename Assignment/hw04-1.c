#include <stdio.h>

int reverse(int n);
void printMultiTable(void);

int main(void){

    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    printf("reverse: %d\n", reverse(n));

    printMultiTable();

    return 0;
}

int reverse(int n){
    int result = 0;
    while(n != 0){
        int d = n % 10;
        result *= 10;
        result += d;
        n /= 10;
    }
    return result;
}
void printMultiTable(void){
    for(int a = 1; a <= 9; a++){
        for(int b = 1; b <= 9; b++){
            printf("%d x %d = %-3d", b, a, b * a);
        }
        printf("\n");
    }
}