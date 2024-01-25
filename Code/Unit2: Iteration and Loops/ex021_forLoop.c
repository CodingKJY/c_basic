#include <stdio.h>

int main(void){
    
    int start = 0;
    int number_of_loops = 5;

    for(int i = start; i < number_of_loops; i++){
        printf("%d", i);
    }

    puts("\n");
    for(int i = start; i < number_of_loops; i++){
        printf("%d\n", i);
    }

    puts("");
    for(int i = start; i < number_of_loops; i++){
        int a = 0;
        printf("a = %d\n", a);
        a++;
    }

    return 0;
}
