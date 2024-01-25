#include <stdio.h>

int main(void){

    char str1[]  = "Hello!";
    char str2[5] = "Hey";

    for(int i = 0; i < (int)(sizeof(str1)/sizeof(char)); i++) printf("'%c'\n", str1[i]);
    printf("str1 = %s\n", str1);
    puts("");
    for(int i = 0; i < 5; i++) printf("'%c'\n", str2[i]);
    printf("str2 = %s\n", str2);

    return 0;
}