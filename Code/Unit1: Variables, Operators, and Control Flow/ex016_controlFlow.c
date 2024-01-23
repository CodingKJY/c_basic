#include <stdio.h>

int main(void){

    int a;
    
    printf("Input a number: "); scanf("%d", &a);
    if(a > 0){
        printf("%d is greater than 0\n", a);
    }
    else if(a < 0){
        printf("%d is less than 0\n", a);
    }
    else{
        printf("Your input is 0\n");
    }

    return 0;
}