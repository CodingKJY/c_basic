#include <stdio.h>

#define PI 3.14159
#define AREA(R) R * R * PI

float area(float radius);

int main(void){

    float radius = 2.0f;

    printf("area(%f) = %f\n", radius, area(radius));
    printf("AREA(%f) = %f\n", radius, AREA(radius));

    return 0;
}

float area(float radius){
    return radius * radius * PI;
}