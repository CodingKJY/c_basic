#include <stdio.h>

int main(void){

    int key = 28;
    int guess;
    int upper = 100;
    int lower = 1;

    while(1){
        printf("Guess a number [%d - %d]: ", lower, upper);
        scanf("%d", &guess);

        if(guess > upper || guess < lower){
            printf("Out of range!\n");
        }
        else if(guess > key){
            printf("Guess too high!\n");
            upper = guess - 1;
        }
        else if(guess < key){
            printf("Guess too small!\n");
            lower = guess + 1;
        }
        else{
            printf("Get number!\n");
            break;
        }
        printf("\n");
    }

    return 0;
}