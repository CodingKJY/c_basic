#include <stdio.h>

int main(void){

    for(int n = 2; n <= 100; n++){
        int isPrime = 1;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d is Prime\n", n);
    }

    return 0;
}