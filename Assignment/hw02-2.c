#include <stdio.h>
#include <stdlib.h>

int evenTest(int n);
int number_of_even = 0;

int main(void){
    evenTest(24);
    evenTest(23);
    evenTest(21);
    evenTest(11);
    evenTest(10);
    printf("Number of even is: %d\n", number_of_even);
    return 0;
}

int evenTest(int n){
    if(n % 2 == 0){
        // number_of_even = number_of_even  1;
        // number_of_even += 1;
        number_of_even++;
        return 1;
    }
    return 0;
}