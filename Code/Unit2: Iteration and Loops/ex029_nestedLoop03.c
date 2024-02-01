#include <stdio.h>

int main(void){

    for(int n = 7; ; n++){
        int isPerfectNum = 1;
        int divisorSum = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0)
                divisorSum += i;
        }
        if(divisorSum == n){
            printf("Get Perfect Number: %d\n", n);
            break;
        }
    }

    return 0;
}